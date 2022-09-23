using System;
using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Rendering;

public class PlayerController : MonoBehaviour
{
    [Header("Important References")] [SerializeField]
    private GameObject _mainCamera;

    [SerializeField] private PlayerInputController _input;
    [SerializeField] private CharacterController _Controller;
    [SerializeField] private GameManager _gameManager;
    [SerializeField] private UIManager _uiManager;
    [SerializeField] private Animator playerAnimator;


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
    [SerializeField] public GameObject tempHitObject;

    private int InteractionLayerMask = 1 << 9;


    [Header("Flashlight Settings")] [SerializeField]
    private GameObject FlashlightOnPlayerMesh;

    [SerializeField] private float batteriesAvailable;

    [SerializeField] private float BatteryPercentageLeft;
    [SerializeField] private bool FlashLightOn = true;
    [SerializeField] private Light flashLight_Light;
    [SerializeField] private bool isFlashLightEquipt = false;
    [SerializeField] private bool isFlashlightPickedUp = false;

    [Header("General Settings")] [SerializeField]
    private float Gravity;

    [SerializeField] public bool IsFirstPerson;

    [SerializeField] private CinemachineVirtualCamera FPPCam, TPPCam;
    [SerializeField] private GameObject PlayerMesh, PlayerHairMesh;
    [SerializeField] private GameObject PlayerRigHeadAim, PlayerThirdPersonAimPoint;
    [SerializeField] private GameObject PlayerThirdPersonSpineAimPoint;
    [SerializeField] private GameObject PlayerSpineAim;
    [SerializeField] private GameObject PlayerFlashLightAim;
    [SerializeField] private GameObject PlayerThirdPersonFlashlightAimPoint;

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

    [SerializeField] private LayerMask PlayerExceptionGroundMask;

    [Header("CameraComputer Interaction Settings")] [SerializeField]
    private bool IsConnectedToComputer;

    [SerializeField] private CameraComputerInformation cci;

    [SerializeField] private GameObject cameraCurrentlyOn;

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
            if (PlayerMesh != null)
            {
                PlayerMesh.GetComponent<SkinnedMeshRenderer>().shadowCastingMode = ShadowCastingMode.ShadowsOnly;
            }

            if (PlayerHairMesh != null)
            {
                PlayerHairMesh.GetComponent<MeshRenderer>().shadowCastingMode = ShadowCastingMode.ShadowsOnly;
            }

            if (FlashlightOnPlayerMesh != null && isFlashlightPickedUp)
            {
                FlashlightOnPlayerMesh.gameObject.SetActive(false);
            }

            FPPCam.Priority = 1;
            TPPCam.Priority = 0;
        }
        else
        {
            if (PlayerMesh != null)
            {
                PlayerMesh.GetComponent<SkinnedMeshRenderer>().shadowCastingMode = ShadowCastingMode.On;
            }

            if (PlayerHairMesh != null)
            {
                PlayerHairMesh.GetComponent<MeshRenderer>().shadowCastingMode = ShadowCastingMode.On;
            }

            if (FlashlightOnPlayerMesh != null && isFlashlightPickedUp)
            {
                FlashlightOnPlayerMesh.gameObject.SetActive(true);
            }

            FPPCam.Priority = 0;
            TPPCam.Priority = 1;
        }
    }

    // Update is called once per frame
    void Update()
    {
        PlayerRigHeadAim.transform.position = PlayerThirdPersonAimPoint.transform.position;
        PlayerSpineAim.transform.position = PlayerThirdPersonSpineAimPoint.transform.position;
        PlayerFlashLightAim.transform.position = PlayerThirdPersonFlashlightAimPoint.transform.position;


        ApplyGravity();
        CheckIfPlayerGrounded();
        if (!IsConnectedToComputer)
        {
            PerformCharacterMovement();
            PerformJump();
            if (IsFirstPerson)
            {
                if (Physics.Raycast(FPPCam.transform.position, FPPCam.transform.forward, out RaycastHit raycastHit,
                        FPPInteractionDistance, InteractionLayerMask))
                {
                    if (raycastHit.transform.gameObject != null)
                    {
                        tempHitObject = raycastHit.collider.gameObject;
                        if (raycastHit.transform.CompareTag("Battery"))
                        {
                            _uiManager.SetCrossHairTexture(_uiManager.HandIcon);
                        }
                        else if (raycastHit.transform.CompareTag("Note"))
                        {
                            _uiManager.SetCrossHairTexture(_uiManager.NoteIcon);
                        }
                        else if (raycastHit.transform.CompareTag("CameraComputer"))
                        {
                            _uiManager.SetCrossHairTexture(_uiManager.ComputerIcon);
                        }
                        else if (raycastHit.transform.CompareTag("Flashlight"))
                        {
                            _uiManager.SetCrossHairTexture(_uiManager.FlashlightIcon);
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
                        TPPCam.transform.forward, out RaycastHit raycastHit,
                        TPPInteractionDistance, InteractionLayerMask))
                {
                    if (raycastHit.transform.gameObject != null)
                    {
                        tempHitObject = raycastHit.collider.gameObject;
                        if (raycastHit.transform.CompareTag("Battery"))
                        {
                            _uiManager.SetCrossHairTexture(_uiManager.HandIcon);
                        }
                        else if (raycastHit.transform.CompareTag("Note"))
                        {
                            _uiManager.SetCrossHairTexture(_uiManager.NoteIcon);
                        }
                        else if (raycastHit.transform.CompareTag("CameraComputer"))
                        {
                            _uiManager.SetCrossHairTexture(_uiManager.ComputerIcon);
                        }
                        else if (raycastHit.transform.CompareTag("Flashlight"))
                        {
                            _uiManager.SetCrossHairTexture(_uiManager.FlashlightIcon);
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
        else
        {
            CheckForComputerExitInput();
            SwitchToNextCamera();
        }
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
        if (IsConnectedToComputer)
        {
            RotateCameraComputerCamera();
        }
        else
        {
            SwitchCamera();
            PerformCameraRotation();
        }
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

        if (_input.move == Vector2.zero) targetSpeed = 0.0f;

        // a reference to the players current horizontal velocity
        float currentHorizontalSpeed = new Vector3(_Controller.velocity.x, 0f, _Controller.velocity.z).magnitude;

        float speedOffset = 0.1f;

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

        playerAnimator.SetFloat("MoveX", _input.move.x);
        playerAnimator.SetFloat("MoveY", _input.move.y);
        _Controller.Move(inputDirection.normalized * (currCalculatedSpeed * Time.deltaTime)
                         + (Vector3.up * (verticalVelocity) * Time.deltaTime));
    }

    private void CheckIfPlayerGrounded()
    {
        IsGrounded = Physics.CheckSphere(groundCheck_GO.transform.position, GroundedAreaRadius,
            ~PlayerExceptionGroundMask);
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
                if (PlayerHairMesh != null)
                {
                    PlayerHairMesh.GetComponent<MeshRenderer>().shadowCastingMode = ShadowCastingMode.ShadowsOnly;
                }

                if (PlayerMesh != null)
                {
                    PlayerMesh.GetComponent<SkinnedMeshRenderer>().shadowCastingMode = ShadowCastingMode.ShadowsOnly;
                }

                if (FlashlightOnPlayerMesh != null && isFlashlightPickedUp && !isFlashLightEquipt)
                {
                    FlashlightOnPlayerMesh.gameObject.SetActive(false);
                }
                else if (FlashlightOnPlayerMesh != null && isFlashlightPickedUp && isFlashLightEquipt)
                {
                }

                FPPCam.Priority = 1;
                TPPCam.Priority = 0;
            }
            else
            {
                if (PlayerHairMesh != null)
                {
                    PlayerHairMesh.GetComponent<MeshRenderer>().shadowCastingMode = ShadowCastingMode.On;
                }

                if (PlayerMesh != null)
                {
                    PlayerMesh.GetComponent<SkinnedMeshRenderer>().shadowCastingMode = ShadowCastingMode.On;
                }

                if (FlashlightOnPlayerMesh != null && isFlashlightPickedUp)
                {
                    FlashlightOnPlayerMesh.gameObject.SetActive(true);
                }

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
                    DoBatteryInteraction(hit.collider.gameObject);
                }
                else if (hit.transform.CompareTag("Note"))
                {
                    DoNoteInteraction(hit.collider.gameObject);
                }
                else if ((hit.transform.CompareTag("CameraComputer")))
                {
                    DoCameraComputerInteraction(hit.collider.gameObject);
                }
                else if (hit.transform.CompareTag("Flashlight"))
                {
                    DoFlashlightInteraction(hit.collider.gameObject);
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

    private void DoBatteryInteraction(GameObject hitObject)
    {
        Debug.Log("Battery Picked up.");
        batteriesAvailable++;
        Destroy(hitObject);
    }

    private void DoNoteInteraction(GameObject hitObject)
    {
        Debug.Log("Note picked up.");
        _gameManager.NotesCollected++;
        _gameManager.NotesInScene.Remove(hitObject);
        Destroy(hitObject);
    }

    private void DoCameraComputerInteraction(GameObject hitObject)
    {
        Debug.Log("Connected to the computer.");
        cci = hitObject.GetComponent<CameraComputerInformation>();
        cci.CurrentViewingCamera.GetComponentInChildren<CinemachineVirtualCamera>().Priority = 1;
        FPPCam.Priority = 0;
        TPPCam.Priority = 0;
        IsConnectedToComputer = true;
        currCalculatedSpeed = 0;
        if (IsFirstPerson)
        {
            PlayerHairMesh.GetComponent<MeshRenderer>().shadowCastingMode = ShadowCastingMode.On;
            PlayerMesh.GetComponent<MeshRenderer>().shadowCastingMode = ShadowCastingMode.On;
        }

        _uiManager.SwitchBetweenUIType(false);
    }

    private void DoFlashlightInteraction(GameObject hitObject)
    {
        Debug.Log("i am a flashlight interaction.");
        FlashlightOnPlayerMesh.SetActive(true);
        isFlashlightPickedUp = true;
        Destroy(hitObject);
    }

    private void RotateCameraComputerCamera()
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

            cameraCurrentlyOn.GetComponent<SecurityCamera_Settings>().CameraComputerVerticalTargetPitch +=
                tempInputLook * MouseSensitivity * 1f;
            cameraCurrentlyOn.GetComponent<SecurityCamera_Settings>().CameraComputerHorizontalTargetPitch +=
                _input.look.x * MouseSensitivity * 1f;

            // clamp our pitch rotation
            cameraCurrentlyOn.GetComponent<SecurityCamera_Settings>().CameraComputerVerticalTargetPitch = ClampAngle(
                cameraCurrentlyOn.GetComponent<SecurityCamera_Settings>().CameraComputerVerticalTargetPitch,
                cci.CurrentCamera_MinVertical_ClampValue, cci.CurrentCamera_MaxVertical_ClampValue);

            cameraCurrentlyOn.GetComponent<SecurityCamera_Settings>().CameraComputerHorizontalTargetPitch = ClampAngle(
                cameraCurrentlyOn.GetComponent<SecurityCamera_Settings>().CameraComputerHorizontalTargetPitch,
                cci.CurrentCamera_MinHorizontal_ClampValue, cci.CurrentCamera_MaxHorizontal_ClampValue);

            cci.CurrentViewingCamera.transform.localRotation = Quaternion.Euler(
                cameraCurrentlyOn.GetComponent<SecurityCamera_Settings>().CameraComputerVerticalTargetPitch,
                cameraCurrentlyOn.GetComponent<SecurityCamera_Settings>().CameraComputerHorizontalTargetPitch, 0.0f);
        }
    }

    private void CheckForComputerExitInput()
    {
        if (_input.interact_Action.WasPerformedThisFrame())
        {
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

            IsConnectedToComputer = false;
            _uiManager.SwitchBetweenUIType(true);
            if (IsFirstPerson)
            {
                PlayerHairMesh.GetComponent<MeshRenderer>().shadowCastingMode = ShadowCastingMode.ShadowsOnly;
                PlayerMesh.GetComponent<MeshRenderer>().shadowCastingMode = ShadowCastingMode.ShadowsOnly;
            }

            cci.CurrentViewingCamera.GetComponentInChildren<CinemachineVirtualCamera>().Priority = 0;
            Debug.Log("Disconnected from the computer.");
        }
    }

    private void SwitchToNextCamera()
    {
        cameraCurrentlyOn = cci.CurrentViewingCamera;
        int index = cci.CameraObjectsConnectedToThisComputer.FindIndex(currentCamera =>
            currentCamera.gameObject == cameraCurrentlyOn);
        cci.currentCamIndex = index;

        if (_input.move.x > 0 && _input.move_Action.WasPressedThisFrame())
        {
            if ((index + 1) > cci.CameraObjectsConnectedToThisComputer.Count - 1)
            {
                cameraCurrentlyOn.GetComponentInChildren<CinemachineVirtualCamera>().Priority = 0;
                cci.CurrentViewingCamera =
                    cci.CameraObjectsConnectedToThisComputer[0];
            }
            else
            {
                cameraCurrentlyOn.GetComponentInChildren<CinemachineVirtualCamera>().Priority = 0;
                cci.CurrentViewingCamera =
                    cci.CameraObjectsConnectedToThisComputer[index + 1];
            }
        }

        if (_input.move.x < 0 && _input.move_Action.WasPressedThisFrame())
        {
            if ((index - 1) < 0)
            {
                cameraCurrentlyOn.GetComponentInChildren<CinemachineVirtualCamera>().Priority = 0;
                cci.CurrentViewingCamera =
                    cci.CameraObjectsConnectedToThisComputer[
                        cci.CameraObjectsConnectedToThisComputer.Count - 1];
            }
            else
            {
                cameraCurrentlyOn.GetComponentInChildren<CinemachineVirtualCamera>().Priority = 0;
                cci.CurrentViewingCamera =
                    cci.CameraObjectsConnectedToThisComputer[index - 1];
            }
        }

        cameraCurrentlyOn = cci.CurrentViewingCamera;
        cameraCurrentlyOn.GetComponentInChildren<CinemachineVirtualCamera>().Priority = 1;
        cci.ChangeCameraClampSettings(cameraCurrentlyOn.GetComponent<SecurityCamera_Settings>());
    }

    private void FlashLight()
    {
        if (_input.flashlight_Action.WasPressedThisFrame() && isFlashlightPickedUp && !isFlashLightEquipt)
        {
            Debug.Log("pulling out the flashlight");
            isFlashLightEquipt = true;
        }
        else if (_input.flashlight_Action.WasPressedThisFrame() && isFlashlightPickedUp && isFlashLightEquipt)
        {
            isFlashLightEquipt = false;
            Debug.Log("Putting away the flashlight");
        }

        if (_input.flashlight_Activation_Action.WasPressedThisFrame() && isFlashlightPickedUp && isFlashLightEquipt)
        {
            FlashLightOn = !FlashLightOn;
            flashLight_Light.enabled = FlashLightOn;
            Debug.Log("activiating / deactivation");
        }
    }

    private void ScaleLightIntensityWithBatteryPercentage()
    {
        //fill this in.
    }

    //Function made to return the angle back to 0 when it goes past 360 degrees and vice versa, if it goes lower then 0 it goes to 360.
    //after that we clamp the values based on the mouse clamp values we specify in the inspector.
    private float ClampAngle(float lfAngle, float lfMin, float lfMax)
    {
        if (lfAngle < -360f) lfAngle += 360f;
        if (lfAngle > 360f) lfAngle -= 360f;
        return Mathf.Clamp(lfAngle, lfMin, lfMax);
    }
}