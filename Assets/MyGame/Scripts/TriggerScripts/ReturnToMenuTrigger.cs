using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReturnToMenuTrigger : MonoBehaviour
{
    [SerializeField] private SceneLoader _sceneLoader;

    [SerializeField] private GameManager _gm;

    private void OnTriggerEnter(Collider other)
    {
        if (_gm.AllNotesCollected)
        {
            StartCoroutine(_sceneLoader.FakeLoadSceneAsync("MainMenu", 3f));
        }
        else
        {
            Debug.Log("You must collect all the notes in order to leave.");
        }
    }
}