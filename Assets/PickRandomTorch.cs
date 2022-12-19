using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickRandomTorch : MonoBehaviour
{
    public GameObject currTorch;

    public List<GameObject> TorchList = new List<GameObject>();

    public BehaviorExecutor BehaviorExecutor;

    public float previousCheckTime;

    public float nextCheckTime = 3f;

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
                break;
            }
            else
            {
                BehaviorExecutor.SetBehaviorParam("AreTorchesLit", false);
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        BehaviorExecutor.SetBehaviorParam("Torch", currTorch);

        float distanceToTorch = Vector3.Distance(this.gameObject.transform.position, currTorch.transform.position);
        if (distanceToTorch <= 5)
        {
            GameObject FireEffect = currTorch.transform.GetChild(0).gameObject;
            GameObject PointLight = currTorch.transform.GetChild(1).gameObject;
            PointLight.SetActive(false);
            FireEffect.SetActive(false);
        }

        if (Time.time > previousCheckTime + nextCheckTime)
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
                    break;
                }
                else
                {
                    BehaviorExecutor.SetBehaviorParam("AreTorchesLit", false);
                }
            }

            previousCheckTime = Time.time;
        }
        else
        {
            Debug.Log("Just checked recently.");
            BehaviorExecutor.SetBehaviorParam("AreTorchesLit", false);

        }
    }
}