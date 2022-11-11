using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Rendering;

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

                if (_playerController.PlayerHairMesh != null)
                {
                    _playerController.PlayerHairMesh.GetComponent<MeshRenderer>().shadowCastingMode =
                        ShadowCastingMode.On;
                }

                if (_playerController.PlayerMesh != null)
                {
                    _playerController.PlayerMesh.GetComponent<SkinnedMeshRenderer>().shadowCastingMode =
                        ShadowCastingMode.On;
                }
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

                if (_playerController.IsFirstPerson)
                {
                    if (_playerController.PlayerHairMesh != null)
                    {
                        _playerController.PlayerHairMesh.GetComponent<MeshRenderer>().shadowCastingMode =
                            ShadowCastingMode.ShadowsOnly;
                    }

                    if (_playerController.PlayerMesh != null)
                    {
                        _playerController.PlayerMesh.GetComponent<SkinnedMeshRenderer>().shadowCastingMode =
                            ShadowCastingMode.ShadowsOnly;
                    }
                }
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