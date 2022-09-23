using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyController : MonoBehaviour
{
    [SerializeField] PlayerController _playerController;
    [SerializeField] private GameObject FPPCameraObject, TPPCameraObject;

    [SerializeField] public bool IsPlayerGlaringAtMe;
    [SerializeField] public bool IsPlayerFlashLightOn;

    [SerializeField] private NavMeshAgent _agent;

    [SerializeField] private float CurrentValueOfRotation;

    [SerializeField] private float CloseMinGlareFPPDetectionValue;
    [SerializeField] private float CloseMaxGlareFPPDetectionValue;

    [SerializeField] private float CloseMinGlareTPPDetectionValue;
    [SerializeField] private float CloseMaxGlareTPPDetectionValue;


    [SerializeField] private float OutSideCloseRangeDetectionValue;

    [SerializeField] private float CloseDistance = 0.2f;
    [SerializeField] private float YOffset;

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        CheckPlayerGlaringRotation();
        // MoveEnemy();
    }

    private void CheckPlayerGlaringRotation()
    {
        if (_playerController.gameObject != null)
        {
            if (_playerController.IsFirstPerson)
            {
                CurrentValueOfRotation = Vector3.Dot((FPPCameraObject.transform.forward + Vector3.up * YOffset),
                    ((FPPCameraObject.transform.position + Vector3.up * YOffset) -
                     (gameObject.transform.position + Vector3.up * YOffset)).normalized);
            }
            else
            {
                CurrentValueOfRotation = Vector3.Dot(TPPCameraObject.transform.forward,
                    (TPPCameraObject.transform.position - (gameObject.transform.position + Vector3.up * YOffset))
                    .normalized);
            }

            if (Vector3.Distance(_playerController.gameObject.transform.position, transform.position) < CloseDistance)
            {
                if (_playerController.IsFirstPerson)
                {
                    if (CurrentValueOfRotation < CloseMinGlareFPPDetectionValue &&
                        CurrentValueOfRotation > CloseMaxGlareFPPDetectionValue)
                    {
                        Debug.Log("Very much facing the enemy. - inside range");
                        IsPlayerGlaringAtMe = true;
                    }
                    else
                    {
                        Debug.Log("Not facing the enemy. - inside range");
                        IsPlayerGlaringAtMe = false;
                    }
                }
                else
                {
                    if (CurrentValueOfRotation < CloseMinGlareTPPDetectionValue &&
                        CurrentValueOfRotation > CloseMaxGlareTPPDetectionValue)
                    {
                        Debug.Log("Very much facing the enemy. - inside range");
                        IsPlayerGlaringAtMe = true;
                    }
                    else
                    {
                        Debug.Log("Not facing the enemy. - inside range");
                        IsPlayerGlaringAtMe = false;
                    }
                }
            }
            else
            {
                if (CurrentValueOfRotation < OutSideCloseRangeDetectionValue)
                {
                    Debug.Log("Very much facing the enemy. - outside range");

                    IsPlayerGlaringAtMe = true;
                }
                else
                {
                    Debug.Log("Not facing the enemy. - outside range");
                    IsPlayerGlaringAtMe = false;
                }
            }
        }
    }

    private void MoveEnemy()
    {
        if ((!IsPlayerGlaringAtMe))
        {
            _agent.destination = (_playerController.gameObject.transform.position);
            _agent.isStopped = false;
        }
        else
        {
            _agent.isStopped = true;
        }
        //the proper if logic when i add in the flashlight equipt animation causde im low on time for lab 1 lol.
        // if ((!IsPlayerGlaringAtMe && !IsPlayerFlashLightOn) || (IsPlayerGlaringAtMe && !IsPlayerFlashLightOn))
        // {
        // }
        // else if (IsPlayerGlaringAtMe && !IsPlayerFlashLightOn)
        // {
        // }
    }
}