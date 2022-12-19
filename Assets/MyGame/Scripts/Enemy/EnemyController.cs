using System.Collections;
using System.Collections.Generic;
using Cinemachine;
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

    [SerializeField] private bool IsSeekerEnemy = false;
    [SerializeField] private bool IsFleeingEnemy = false;
    [SerializeField] private bool IsNavmeshEnemy;


    [Header("Assignment 3 Settings")] [SerializeField]
    private float MaxSpeedOfEnemy;

    [SerializeField] private Vector3 velocity;
    [SerializeField] private float MaxTurningForce;
    [SerializeField] private float MassOfEnemy;


    [SerializeField] private float KillingDistance = 0.2f;

    [SerializeField] private float IsPlayerWithinWinningDistance = 0.2f;

    [SerializeField] private float PlayerWithinSeekingDistance;
    [SerializeField] private float PlayerWithinFleeingDistance;

    [SerializeField] private GameManager _gameManager;
    [SerializeField] private AudioManager _audioManager;

    [SerializeField] private bool IsAlreadyScreaming = false;

    // Start is called before the first frame update
    void Start()
    {
        velocity = Vector3.zero;
    }

    // Update is called once per frame
    void Update()
    {
        //Normally i do this but for this assignment i ignore it.
        //  CheckPlayerGlaringRotation();

        if (Vector3.Distance(_playerController.gameObject.transform.position, transform.position) < KillingDistance &&
            !IsFleeingEnemy)
        {
            if (!_gameManager.GameOver)
            {
                _gameManager.KillPlayerAssignment3();
            }
        }
        else if (Vector3.Distance(_playerController.gameObject.transform.position, transform.position) >
                 KillingDistance && !IsFleeingEnemy)
        {
            MoveEnemy();
        }
        else if (IsFleeingEnemy)
        {
            MoveEnemy();
        }

        //Make sure the enemy doesnt do some weird rotations when looking at player.
        this.transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
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
        if (IsNavmeshEnemy)
        {
            if ((_playerController.gameObject.transform.position - this.gameObject.transform.position).magnitude <=
                PlayerWithinSeekingDistance)
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
            }
        }
        else if (IsSeekerEnemy)
        {
            var position = this.gameObject.transform.position;
            Vector3 desiredVelocity = _playerController.transform.position - position;
            if ((_playerController.gameObject.transform.position - this.gameObject.transform.position).magnitude <=
                PlayerWithinSeekingDistance)
            {
                if (!_gameManager.IsScreaming && !IsAlreadyScreaming)
                {
                    _audioManager.PlaySoundEffect("DeathSound");
                    _gameManager.IsScreaming = true;
                    IsAlreadyScreaming = true;
                }

                Debug.Log("Enemy is now seeking");

                desiredVelocity = desiredVelocity.normalized * MaxSpeedOfEnemy;

                Vector3 steering = desiredVelocity - velocity;

                steering = Vector3.ClampMagnitude(steering, MaxTurningForce);
                steering /= MassOfEnemy;

                velocity = Vector3.ClampMagnitude(velocity + steering, MaxSpeedOfEnemy);

                position += velocity * Time.deltaTime;

                this.gameObject.transform.forward = velocity.normalized;
                this.gameObject.transform.position = position;

                Debug.DrawRay(this.gameObject.transform.position, velocity.normalized * 2, Color.green);
                Debug.DrawRay(this.gameObject.transform.position, desiredVelocity.normalized * 2, Color.red);
            }
            else
            {
                IsAlreadyScreaming = false;
                _audioManager.StopSoundEffect("DeathSound");
                _gameManager.IsScreaming = false;
            }
        }
        else if (IsFleeingEnemy)
        {
            var position = this.gameObject.transform.position;

            Vector3 desiredVelocity = _playerController.transform.position - position;

            if ((_playerController.gameObject.transform.position - this.gameObject.transform.position).magnitude <=
                PlayerWithinFleeingDistance)
            {
                Debug.Log("Enemy is now fleeing");
                desiredVelocity = desiredVelocity.normalized * MaxSpeedOfEnemy;

                Vector3 steering = desiredVelocity - velocity;

                steering = Vector3.ClampMagnitude(steering, MaxTurningForce);

                steering /= MassOfEnemy;
                this.gameObject.transform.Rotate(Vector3.up, -1f * this.transform.eulerAngles.y);

                velocity = Vector3.ClampMagnitude(velocity + steering, MaxSpeedOfEnemy);
                position += (-1 * velocity) * Time.deltaTime;
                this.gameObject.transform.forward = velocity.normalized;
                this.gameObject.transform.position = position;
            }

            Debug.DrawRay(this.gameObject.transform.position, -1f * velocity.normalized * 2, Color.green);
            Debug.DrawRay(this.gameObject.transform.position, desiredVelocity.normalized * 2, Color.red);
        }

    
        

        //the proper if logic when i add in the flashlight equipt animation causde im low on time for lab 1 lol.
        // if ((!IsPlayerGlaringAtMe && !IsPlayerFlashLightOn) || (IsPlayerGlaringAtMe && !IsPlayerFlashLightOn))
        // {
        // }
        // else if (IsPlayerGlaringAtMe && !IsPlayerFlashLightOn)
        // {
        // }
    }
    
    public void SeekFireAroundMap()
    {
            
    }

    public void AlertOtherEnemiesOfPlayer()
    {
            
            
    }
        

    public void FleeFromPlayer()
    {
        var position = this.gameObject.transform.position;

        Vector3 desiredVelocity = _playerController.transform.position - position;

        if ((_playerController.gameObject.transform.position - this.gameObject.transform.position).magnitude <=
            PlayerWithinFleeingDistance)
        {
            Debug.Log("Enemy is now fleeing");
            desiredVelocity = desiredVelocity.normalized * MaxSpeedOfEnemy;

            Vector3 steering = desiredVelocity - velocity;

            steering = Vector3.ClampMagnitude(steering, MaxTurningForce);

            steering /= MassOfEnemy;
            this.gameObject.transform.Rotate(Vector3.up, -1f * this.transform.eulerAngles.y);

            velocity = Vector3.ClampMagnitude(velocity + steering, MaxSpeedOfEnemy);
            position += (-1 * velocity) * Time.deltaTime;
            this.gameObject.transform.forward = velocity.normalized;
            this.gameObject.transform.position = position;
        }
    }
    
    
}