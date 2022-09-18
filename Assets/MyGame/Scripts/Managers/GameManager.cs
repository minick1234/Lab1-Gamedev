using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    //Make this random eventually but as of right now it is static.
    public List<GameObject> Notes = new List<GameObject>();
    public float NotesCollected = 0;


    public List<GameObject> Batteries = new List<GameObject>();


    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
    }

    public void CollectNote()
    {
    }

    public void IncreaseDifficulty()
    {
    }

    public void CollectBattery()
    {
    }
}