using System;
using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour
{
    [Header("Important References")] [SerializeField]
    private GameObject _mainCamera;

    [SerializeField] private PlayerInputController _input;
    [SerializeField] private CharacterController _Controller;
    [SerializeField] private GameManager _gameManager;
    [SerializeField] private UIManager _uiManager;

    [Header("Player Settings")] [SerializeField]
    private float PlayerWalkSpeed;

    [SerializeField] private float PlayerSprintSpeed;
    [SerializeField] private float currCalculatedSpeed;

    [SerializeField] private float terminalVelocity = 53f;
    [SerializeField] private float verticalVelocity;
    [SerializeField] private float speedRateChange;
    [SerializeField] private float rotationVelocity;
    [SerializeField] private float DesiredJumpHeight;

    [Header("Mouse Settings")] [SerializeField]
    private float MouseSensitivity;

    [SerializeField] private bool InvertMouseMovement;
    [SerializeField] private float MouseMovementMinimumThreshhold = 0.01f;
    [SerializeField] private float MaxMouseUpClamp;
    [SerializeField] private float MaxMouseDownClamp;
    private float _cinemachineTargetPitch;

    [Header("Interaction Settings")] [SerializeField]
    private float TPPInteractionDistance;

    [SerializeField] private float TPPInteractionOffset;
    [SerializeField] private float FPPInteractionDistance;
    [SerializeField] public RaycastHit tempHitObject;

    private int InteractionLayerMask = 1 << 9;


    [Header("Flashlight Settings")] [SerializeField]
    private float batteriesAvailable;

    [SerializeField] private float BatteryPercentageLeft;
    [SerializeField] private bool FlashLightOn = true;
    [SerializeField] private Light flashLight_Light;

    [Header("General Settings")] [SerializeField]
    private float Gravity;

    [SerializeField] private bool IsFirstPerson;

    [SerializeField] private CinemachineVirtualCamera FPPCam, TPPCam;

    [Header("Input TimeOuts")] [SerializeField]
    private float JumpTimeout = 0.1f;

    private float currJumpTime;

    //This is a really useful thing i learned from unity character controller stuff as it helps prevent the
    //character from entering the falling state until this time is reached to avoid things like "falling" down stairs.
    [SerializeField] private float FallTimeout = 0.15f;

    private float currFallTime;

    [Header("Grounded Settings")] [SerializeField]
    private GameObject groundCheck_GO;

    [SerializeField] private bool IsGrounded;
    [SerializeField] private float GroundedAreaRadius = 0.35f;

    [SerializeField] private LayerMask groundLayer;

    //These are for the gizmo.
    [SerializeField] private Color GroundedColor;
    [SerializeField] private Color OffGroundColor;


    private void Awake()
    {
        if (_mainCamera == null)
        {
            _mainCamera = GameObject.FindGameObjectWithTag("MainCamera");
        }

        currFallTime = FallTimeout;
        currJumpTime = JumpTimeout;

        if (IsFirstPerson)
        {
            FPPCam.Priority = 1;
            TPPCam.Priority = 0;
        }
        else
        {
            FPPCam.Priority = 0;
            TPPCam.Priority = 1;
        }
    }

    // Update is called once per frame
    void Update()
    {
        ApplyGravity();
        CheckIfPlayerGrounded();
        PerformJump();
        PerformCharacterMovement();

        if (IsFirstPerson)
        {
            if (Physics.Raycast(FPPCam.transform.position, FPPCam.transform.forward, out tempHitObject,
                    FPPInteractionDistance, InteractionLayerMask))
            {
                if (tempHitObject.transform.gameObject != null)
                {
                    if (tempHitObject.transform.CompareTag("Battery"))
                    {
                        _uiManager.SetCrossHairTexture(_uiManager.HandIcon);
                    }
                    else if (tempHitObject.transform.CompareTag("Note"))
                    {
                        _uiManager.SetCrossHairTexture(_uiManager.NoteIcon);
                    }
                }
            }
            else
            {
                _uiManager.SetCrossHairTexture(_uiManager.Standard_Crosshair);
            }
        }
        else
        {
            if (Physics.Raycast(TPPCam.transform.position + TPPCam.transform.forward * TPPInteractionOffset,
                    TPPCam.transform.forward, out tempHitObject,
                    TPPInteractionDistance, InteractionLayerMask))
            {
                if (tempHitObject.transform.gameObject != null)
                {
                    if (tempHitObject.transform.CompareTag("Battery"))
                    {
                        _uiManager.SetCrossHairTexture(_uiManager.HandIcon);
                    }
                    else if (tempHitObject.transform.CompareTag("Note"))
                    {
                        _uiManager.SetCrossHairTexture(_uiManager.NoteIcon);
                    }
                }
            }
            else
            {
                _uiManager.SetCrossHairTexture(_uiManager.Standard_Crosshair);
            }
        }


        PerformInteraction();
        FlashLight();
    }

    private void OnDrawGizmos()
    {
        if (IsGrounded) Gizmos.color = GroundedColor;
        else Gizmos.color = OffGroundColor;

        // when selected, draw a gizmo in the position of, and matching radius of, the grounded collider
        Gizmos.DrawSphere(
            groundCheck_GO.transform.position,
            GroundedAreaRadius);
    }


    //Late update is best for the camera as it makes sure that everything is all calculated correctly and done before displaying
    //the frame to the renderer of the camera, avoiding any weird artifacts and glitches
    //makes for the most fluent camera.
    private void LateUpdate()
    {
        SwitchCamera();
        PerformCameraRotation();
    }

    private void PerformCameraRotation()
    {
        // if there is movement of the mouse and it exceeds the minimum movement threshhold.
        if (_input.look.sqrMagnitude >= MouseMovementMinimumThreshhold)
        {
            float tempInputLook = _input.look.y;
            if (InvertMouseMovement)
            {
                //inveresed.
                tempInputLook *= 1f;
            }
            else
            {
                //standard input
                tempInputLook *= -1;
            }

            _cinemachineTargetPitch += tempInputLook * MouseSensitivity * 1f;
            rotationVelocity = _input.look.x * MouseSensitivity * 1f;

            // clamp our pitch rotation
            _cinemachineTargetPitch = ClampAngle(_cinemachineTargetPitch, MaxMouseDownClamp, MaxMouseUpClamp);

            // Update both camera positions in order to make sure the blend between the transitions looks cleaner, and it doesnt snap to random spots.
            FPPCam.transform.localRotation = Quaternion.Euler(_cinemachineTargetPitch, 0.0f, 0.0f);
            TPPCam.transform.parent.localRotation = Quaternion.Euler(_cinemachineTargetPitch, 0.0f, 0.0f);

            // rotate the player left and right
            transform.Rotate(Vector3.up * rotationVelocity);
        }
    }

    private void PerformCharacterMovement()
    {
        float targetSpeed = _input.sprint ? PlayerSprintSpeed : PlayerWalkSpeed;

        //This is somewhat redundant as we handle in the input controller that when we lift from the key and cancel the event
        //it sets the vector2 of move to 0,0. but just for making sure we do this.
        if (_input.move == Vector2.zero) targetSpeed = 0.0f;

        // a reference to the players current horizontal velocity
        float currentHorizontalSpeed = new Vector3(_Controller.velocity.x, 0f, _Controller.velocity.z).magnitude;

        float speedOffset = 0.05f;

        // accelerate or decelerate to target speed
        if (currentHorizontalSpeed < targetSpeed - speedOffset || currentHorizontalSpeed > targetSpeed + speedOffset)
        {
            // creates curved result rather than a linear one giving a more organic speed change
            // note T in Lerp is clamped, so we don't need to clamp our speed
            currCalculatedSpeed = Mathf.Lerp(currentHorizontalSpeed, targetSpeed * _input.move.magnitude,
                Time.deltaTime * speedRateChange);
            currCalculatedSpeed = Mathf.Round(currCalculatedSpeed * 1000f) / 1000f;
        }
        else
        {
            currCalculatedSpeed = targetSpeed;
        }

        Vector3 inputDirection = new Vector3(_input.move.x, 0.0f, _input.move.y).normalized;

        if (_input.move != Vector2.zero)
        {
            // move
            inputDirection = transform.right * _input.move.x + transform.forward * _input.move.y;
        }

        _Controller.Move(inputDirection.normalized * (currCalculatedSpeed * Time.deltaTime)
                         + new Vector3(0.0f, verticalVelocity, 0.0f));
    }

    private void CheckIfPlayerGrounded()
    {
        IsGrounded = Physics.CheckSphere(groundCheck_GO.transform.position, GroundedAreaRadius, groundLayer);
    }

    private void PerformJump()
    {
        if (IsGrounded)
        {
            currFallTime = FallTimeout;

            if (_input.jump && currJumpTime <= 0.0f)
            {
                verticalVelocity = Mathf.Sqrt(DesiredJumpHeight * -2f * Gravity);
            }

            if (currJumpTime >= 0.0f)
            {
                currJumpTime -= Time.deltaTime;
            }
        }
        else
        {
            currJumpTime = JumpTimeout;

            if (currFallTime >= 0.0f)
            {
                currFallTime -= Time.deltaTime;
            }

            _input.jump = false;
        }
    }

    private void SwitchCamera()
    {
        if (_input.switchPerspectiveCamera_Action.WasPressedThisFrame())
        {
            IsFirstPerson = !IsFirstPerson;
            if (IsFirstPerson)
            {
                FPPCam.Priority = 1;
                TPPCam.Priority = 0;
            }
            else
            {
                FPPCam.Priority = 0;
                TPPCam.Priority = 1;
            }
        }
    }


    private void ApplyGravity()
    {
        if (IsGrounded)
        {
            if (verticalVelocity < 0.0f)
            {
                verticalVelocity = -2f;
            }
        }

        if (currFallTime <= 0)
        {
            if (Mathf.Abs(verticalVelocity) < terminalVelocity)
            {
                verticalVelocity += Gravity * Time.deltaTime;
            }
        }
    }


    private void PerformInteraction()
    {
        if (IsFirstPerson)
        {
            Debug.DrawRay(FPPCam.transform.position, FPPCam.transform.forward * FPPInteractionDistance, Color.blue);
        }
        else
        {
            Debug.DrawRay(
                TPPCam.transform.position + TPPCam.transform.forward * TPPInteractionOffset,
                TPPCam.transform.forward * TPPInteractionDistance, Color.red);
        }

        if (_input.interact_Action.WasPressedThisFrame())
        {
            bool HitSomething = false;
            RaycastHit hit;
            if (IsFirstPerson)
            {
                HitSomething = Physics.Raycast(FPPCam.transform.position, FPPCam.transform.forward, out hit,
                    FPPInteractionDistance, InteractionLayerMask);
            }
            else
            {
                HitSomething = Physics.Raycast(
                    TPPCam.transform.position + TPPCam.transform.forward * TPPInteractionOffset,
                    TPPCam.transform.forward, out hit,
                    TPPInteractionDistance);
            }

            if (HitSomething && hit.transform.gameObject != null)
            {
                if (hit.transform.CompareTag("Battery"))
                {
                    DoBatteryInteraction();
                }
                else if (hit.transform.CompareTag("Note"))
                {
                    DoNoteInteraction();
                }
                else
                {
                    Debug.Log("this is not a valid interactable.");
                }
            }
            else
            {
                Debug.Log("we hit nothing.");
            }
        }
    }

    private void DoBatteryInteraction()
    {
        Debug.Log("i am a battery interaction");
    }

    private void DoNoteInteraction()
    {
        Debug.Log("i am a note interaction");
    }

    private void FlashLight()
    {
        if (_input.flashlight_Action.WasPressedThisFrame())
        {
            FlashLightOn = !FlashLightOn;
            flashLight_Light.enabled = FlashLightOn;
        }
    }

    private void ScaleLightIntensityWithBatteryPercentage()
    {
        //fill this in.
    }

    //Function made to return the angle back to 0 when it goes past 360 degrees and vice versa, if it goes lower then 0 it goes to 360.
    //after that we clamp the values based on the mouse clamp values we specify in the inspector.
    private static float ClampAngle(float lfAngle, float lfMin, float lfMax)
    {
        if (lfAngle < -360f) lfAngle += 360f;
        if (lfAngle > 360f) lfAngle -= 360f;
        return Mathf.Clamp(lfAngle, lfMin, lfMax);
    }
}