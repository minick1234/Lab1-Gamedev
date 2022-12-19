using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;
using Random = UnityEngine.Random;

public class SpawnRandomWaypoint : MonoBehaviour
{
    [SerializeField] private GameObject SpawnAreaCollider;
    [SerializeField] private GameObject WaypointObject;

    [SerializeField] private Vector3 currentRandomSpawnPoint;
    [SerializeField] private WaypointItem _waypointItem;

    [SerializeField] private float MaxX;
    [SerializeField] private float MaxZ;
    [SerializeField] private float MinX;
    [SerializeField] private float MinZ;

    private bool ItemSpawnOverlaps = false;

    [SerializeField] private float OverlapCheckRadius = 2f;
    [SerializeField] private LayerMask ObstacleLayerMask;

    [SerializeField] private GameObject currentSpawnedObject;

    [SerializeField] private BehaviorExecutor EnemyBehvaiorExecutor;
    [SerializeField] private GameObject enemyGO;

    // Start is called before the first frame update
    void Awake()
    {
      //  currentSpawnedObject = Instantiate(WaypointObject, new Vector3(100, 100, 100), quaternion.identity);
        _waypointItem = currentSpawnedObject.GetComponent<WaypointItem>();
        EnemyBehvaiorExecutor = enemyGO.GetComponent<BehaviorExecutor>();
        RespawnWaypoint();
    }

    // Update is called once per frame
    void Update()
    {
        //For debugging.
        if (Input.GetKeyDown(KeyCode.L))
        {
            RespawnWaypoint();
        }
        
        if (_waypointItem.HasArrivedAtWaypoint)
        {
            if (_waypointItem.hasBeenInWayPointForSignificantTime)
            {
                _waypointItem.HasArrivedAtWaypoint = false;
                _waypointItem.hasBeenInWayPointForSignificantTime = false;
                RespawnWaypoint();
            }
        }
    }

    public void RespawnWaypoint()
    {
        //Get the spawn area values.
        var localScale = SpawnAreaCollider.transform.localScale;
        float MaxX = localScale.x / 2;
        float MinX = -localScale.x / 2;
        float MaxZ = localScale.z / 2;
        float MinZ = -localScale.z / 2;

        do
        {
            currentRandomSpawnPoint = new Vector3(Random.Range(MinX, MaxX), 1.5f, Random.Range(MinZ, MaxZ));
            if (Physics.CheckSphere(currentRandomSpawnPoint, OverlapCheckRadius, ObstacleLayerMask))
            {
                ItemSpawnOverlaps = true;
            }
            else
            {
                ItemSpawnOverlaps = false;
            }
        } while (ItemSpawnOverlaps);


        currentSpawnedObject.transform.position = currentRandomSpawnPoint;
        EnemyBehvaiorExecutor.SetBehaviorParam("RWP", currentSpawnedObject);
    }
}