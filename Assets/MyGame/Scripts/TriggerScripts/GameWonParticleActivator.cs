using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameWonParticleActivator : MonoBehaviour
{
    [SerializeField] private GameManager _gm;

    [SerializeField] private List<GameObject> particlesToPlay = new List<GameObject>();

    [SerializeField] private GameObject starterarrow;

    private void OnTriggerEnter(Collider other)
    {
        if (_gm.AllNotesCollected)
        {
            foreach (var particle in particlesToPlay)
            {
                particle.GetComponent<ParticleSystem>().Play();
            }

            Destroy(starterarrow);
            Destroy(gameObject);
        }
    }
}