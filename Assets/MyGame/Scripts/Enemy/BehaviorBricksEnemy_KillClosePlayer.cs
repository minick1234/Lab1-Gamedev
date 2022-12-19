using System.Collections;
using System.Collections.Generic;
using Pada1.BBCore;
using Pada1.BBCore.Framework;
using UnityEngine;

[Action("DominiksActions/KillClosePlayer")]
public class BehaviorBricksEnemy_KillClosePlayer : BasePrimitiveAction
{
    [SerializeField]
    private PlayerController _playerController;
    
    [SerializeField]public float MaxSpeedOfEnemy;

    [SerializeField] private Vector3 velocity;
    [SerializeField] public float MaxTurningForce;
    [SerializeField] public float MassOfEnemy;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    
    }
