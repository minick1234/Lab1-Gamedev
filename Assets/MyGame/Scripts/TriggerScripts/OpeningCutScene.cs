using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

public class OpeningCutScene : MonoBehaviour
{
    [SerializeField] private PlayerController _playerController;
    [SerializeField] private PlayerInputController _playerInputController;
    [SerializeField] private GameObject CanvasObject;
    [SerializeField] private GameObject CutSceneFaderUI;

    [SerializeField] private PlayableDirector _playableDirector;

    [SerializeField] private bool HasStartedPlaying;

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if (HasStartedPlaying)
        {
            if (_playableDirector.state == PlayState.Playing)
            {
                _playerController.enabled = false;
                _playerController.StopMovementInstantly();
                _playerInputController.enabled = false;
                CanvasObject.SetActive(false);
            }
            else
            {
                _playerController.enabled = true;
                _playerController.SetCorrectCameraPriority();
                _playerInputController.enabled = true;
                _playerController.StopMovementInstantly();
                CutSceneFaderUI.SetActive(false);
                CanvasObject.SetActive(true);
                Destroy(gameObject);
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            //start playing the timeline director here. and then return back controls to the player.
            _playableDirector.Play();
            HasStartedPlaying = true;
        }
    }
}