using System.Collections;
using System.Collections.Generic;
using BBUnity.Actions;
using Pada1.BBCore;
using Pada1.BBCore.Framework;
using Pada1.BBCore.Tasks;
using UnityEngine;
using UnityEngine.AI;

[Action("DominiksActions/FleeFromPlayer")]
public class BehaviorBricksEnemy_Fleeing : MonoBehaviour
{
    [InParam("Player")] [SerializeField] public GameObject _playerController;
    private BehaviorExecutor BehaviorExecutor;

    public GameObject fleespot;
    public void Update()
    {
    
            Vector3 dirToPlayer =
                (this.gameObject.transform.position - _playerController.transform.position).normalized;

            Vector3 newOppositePosition = new Vector3(this.gameObject.transform.position.x + dirToPlayer.x * 5f, 0,
                this.gameObject.transform.position.z + dirToPlayer.z * 5f);
            fleespot.transform.position = newOppositePosition;
    }
}