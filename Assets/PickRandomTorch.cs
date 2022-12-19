using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PickRandomTorch : MonoBehaviour
{
    public GameObject currTorch;

    public List<GameObject> TorchList = new List<GameObject>();

    public BehaviorExecutor BehaviorExecutor;

    public float previousCheckTime;

    public float nextCheckTime = 3f;

    public bool foundTorch = false;

    public NavMeshAgent mNavMeshAgent;

    public float torchDistance;

    // Start is called before the first frame update
    void Start()
    {
        foreach (var torch in TorchList)
        {
            GameObject FireEffect = torch.transform.GetChild(0).gameObject;
            GameObject PointLight = torch.transform.GetChild(1).gameObject;

            if (FireEffect.activeSelf && PointLight.activeSelf)
            {
                Debug.Log("this light is active.");
                currTorch = torch;
                BehaviorExecutor.SetBehaviorParam("AreTorchesLit", true);
                BehaviorExecutor.SetBehaviorParam("Torch", currTorch);
                foundTorch = true;
                torchDistance = Vector3.Distance(this.gameObject.transform.position, torch.transform.position);
                break;
            }
        }

        if (!foundTorch)
        {
            BehaviorExecutor.SetBehaviorParam("AreTorchesLit", false);
        }
    }

    // Update is called once per frame
    void Update()
    {
        // if (!mNavMeshAgent.pathPending)
        // {
        //     if (mNavMeshAgent.remainingDistance <= mNavMeshAgent.stoppingDistance)
        //     {
        //         if (!mNavMeshAgent.hasPath || mNavMeshAgent.velocity.sqrMagnitude == 0f)
        //         {

        float dist = mNavMeshAgent.remainingDistance;
        if (dist != Mathf.Infinity && mNavMeshAgent.pathStatus == UnityEngine.AI.NavMeshPathStatus.PathComplete &&
            mNavMeshAgent.remainingDistance == 0 && torchDistance <= 1f)
        {
            // Done
            Debug.Log("I have reached end of path.");
            GameObject FireEffect = currTorch.transform.GetChild(0).gameObject;
            GameObject PointLight = currTorch.transform.GetChild(1).gameObject;
            PointLight.SetActive(false);
            FireEffect.SetActive(false);
            foreach (var torch in TorchList)
            {
                FireEffect = torch.transform.GetChild(0).gameObject;
                PointLight = torch.transform.GetChild(1).gameObject;

                if (FireEffect.activeSelf && PointLight.activeSelf)
                {
                    Debug.Log("this light is active.");
                    currTorch = torch;
                    BehaviorExecutor.SetBehaviorParam("AreTorchesLit", true);
                    BehaviorExecutor.SetBehaviorParam("Torch", currTorch);
                    foundTorch = true;
                    break;
                }
                else
                {
                    foundTorch = false;
                }
            }

            if (!foundTorch)
            {
                BehaviorExecutor.SetBehaviorParam("AreTorchesLit", false);
            }
        }
    }

    public void isTorchesActive()
    {
        foreach (var torch in TorchList)
        {
            GameObject FireEffect = torch.transform.GetChild(0).gameObject;
            GameObject PointLight = torch.transform.GetChild(1).gameObject;

            if (FireEffect.activeSelf && PointLight.activeSelf)
            {
                Debug.Log("this light is active.");
                currTorch = torch;
                BehaviorExecutor.SetBehaviorParam("AreTorchesLit", true);
                BehaviorExecutor.SetBehaviorParam("Torch", currTorch);
                foundTorch = true;
                break;
            }
            else
            {
                foundTorch = false;
            }
        }

        if (!foundTorch)
        {
            BehaviorExecutor.SetBehaviorParam("AreTorchesLit", false);
        }
    }
}