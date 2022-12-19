using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaypointItem : MonoBehaviour
{
    public bool HasArrivedAtWaypoint = false;


    public float EnteredWayPointTime;

    public float NextWaypointTime = 1.5f;

    public bool hasBeenInWayPointForSignificantTime = false;

    [SerializeField] private Material wayPointMadeIt_material;
    [SerializeField] private Material notAtWayPointYet_material;
    [SerializeField] private PickRandomTorch _randomTorch;

    // Update is called once per frame
    void Update()
    {
        if (HasArrivedAtWaypoint)
        {
            if (Time.time - EnteredWayPointTime > NextWaypointTime)
            {
                hasBeenInWayPointForSignificantTime = true;
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.transform.CompareTag("Enemy"))
        {
            HasArrivedAtWaypoint = true;
            this.gameObject.GetComponent<MeshRenderer>().material = wayPointMadeIt_material;
            EnteredWayPointTime = Time.time;
        }
        else if (other.transform.CompareTag("Margret"))
        {
            HasArrivedAtWaypoint = true;
            this.gameObject.GetComponent<MeshRenderer>().material = wayPointMadeIt_material;
            EnteredWayPointTime = Time.time;
            _randomTorch.isTorchesActive();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.transform.CompareTag("Enemy"))
        {
            this.gameObject.GetComponent<MeshRenderer>().material = notAtWayPointYet_material;
            HasArrivedAtWaypoint = false;
        }
        else if (other.transform.CompareTag("Margret"))
        {
            this.gameObject.GetComponent<MeshRenderer>().material = notAtWayPointYet_material;
            HasArrivedAtWaypoint = false;
        }
    }
}