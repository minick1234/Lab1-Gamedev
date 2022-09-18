using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngineInternal;

public class PlayerInputController : MonoBehaviour
{
    [SerializeField] private InputActionAsset controls;
    [SerializeField] private InputActionMap _inputActionMap;

    public InputAction move_Action,
        look_Action,
        jump_Action,
        crouch_Action,
        sprint_Action,
        switchPerspectiveCamera_Action,
        interact_Action,
        pause_Action;

    public Vector2 move, look;

    public bool jump, sprint, crouch, interact, switchPerspectiveCamera, pause;

    [Header("Mouse Settings")] public bool cursorLocked = false;
    public bool cursorInputForLook = true;

    private void OnEnable()
    {
        //Assign the inputactionmap to the player inputaction map that i have setup inside of my input action asset.
        _inputActionMap = controls.FindActionMap("Player");

        //Assign the actions to the action map actions
        move_Action = _inputActionMap.FindAction("Move");
        look_Action = _inputActionMap.FindAction("Look");
        jump_Action = _inputActionMap.FindAction("Jump");
        crouch_Action = _inputActionMap.FindAction("Crouch");
        sprint_Action = _inputActionMap.FindAction("Sprint");
        switchPerspectiveCamera_Action = _inputActionMap.FindAction("SwitchCamera");
        interact_Action = _inputActionMap.FindAction("Interact");
        pause_Action = _inputActionMap.FindAction("Pause");

        move_Action.performed += OnMove;
        move_Action.canceled += OnEndMove;

        look_Action.performed += OnLook;
        look_Action.canceled += OnEndLook;

        pause_Action.started += OnPause;

        jump_Action.performed += OnJump;
        crouch_Action.performed += OnCrouch;
        sprint_Action.performed += OnSprint;

        jump_Action.canceled += OnEndJump;
        crouch_Action.canceled += OnEndCrouch;
        sprint_Action.canceled += OnEndSprint;


        //Start the game originally with the mouse being locked.
        Cursor.lockState = CursorLockMode.Locked;
    }

    //when this object is disabled we will unsubscribe from the input events.
    private void OnDisable()
    {
        move_Action.performed -= OnMove;
        move_Action.canceled -= OnEndMove;

        look_Action.performed -= OnLook;
        look_Action.canceled -= OnEndLook;

        pause_Action.performed -= OnPause;


        jump_Action.performed -= OnJump;
        crouch_Action.performed -= OnCrouch;
        sprint_Action.performed -= OnSprint;

        jump_Action.canceled -= OnEndJump;
        crouch_Action.canceled -= OnEndCrouch;
        sprint_Action.canceled -= OnEndSprint;
    }

    private void OnMove(InputAction.CallbackContext obj)
    {
        MoveInput(obj.action.ReadValue<Vector2>());
    }

    private void OnEndMove(InputAction.CallbackContext obj)
    {
        MoveInput(new Vector2(0, 0));
    }

    private void OnLook(InputAction.CallbackContext obj)
    {
        if (cursorInputForLook)
        {
            LookInput(obj.action.ReadValue<Vector2>());
        }
    }

    private void OnEndLook(InputAction.CallbackContext obj)
    {
        if (cursorInputForLook)
        {
            LookInput(new Vector2(0, 0));
        }
    }

    private void OnJump(InputAction.CallbackContext obj)
    {
        JumpInput(obj.action.IsPressed());
    }

    private void OnEndJump(InputAction.CallbackContext obj)
    {
        JumpInput(false);
    }

    private void OnSprint(InputAction.CallbackContext obj)
    {
        SprintInput(obj.action.IsPressed());
    }

    private void OnEndSprint(InputAction.CallbackContext obj)
    {
        SprintInput(false);
    }

    private void OnCrouch(InputAction.CallbackContext obj)
    {
        CrouchInput(obj.action.IsPressed());
    }

    private void OnEndCrouch(InputAction.CallbackContext obj)
    {
        CrouchInput(false);
    }

    private void OnPause(InputAction.CallbackContext obj)
    {
        pause = !pause;
        PauseInput(pause);
    }

    private void MoveInput(Vector2 newMoveDirection)
    {
        move = newMoveDirection;
    }

    private void LookInput(Vector2 newLookDirection)
    {
        look = newLookDirection;
    }


    private void JumpInput(bool newJumpState)
    {
        jump = newJumpState;
    }

    private void SprintInput(bool newSprintState)
    {
        sprint = newSprintState;
    }

    private void CrouchInput(bool newCrouchState)
    {
        crouch = newCrouchState;
    }

    private void PauseInput(bool newPauseState)
    {
        SetCursorState(newPauseState);
    }

    private void SetCursorState(bool newState)
    {
        Cursor.lockState = newState ? CursorLockMode.None : CursorLockMode.Locked;
    }
}