using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraComputerInformation : MonoBehaviour
{
    public List<GameObject> CameraObjectsConnectedToThisComputer = new List<GameObject>();

    public GameObject CurrentViewingCamera;

    public float CurrentCamera_MinHorizontal_ClampValue;
    public float CurrentCamera_MaxHorizontal_ClampValue;

    public float CurrentCamera_MinVertical_ClampValue;
    public float CurrentCamera_MaxVertical_ClampValue;

    public int currentCamIndex;

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
    }

    public void ChangeCameraClampSettings(SecurityCamera_Settings cameraSettings)
    {
        CurrentCamera_MinHorizontal_ClampValue = cameraSettings.MinHorizontal_ClampValue;
        CurrentCamera_MinVertical_ClampValue = cameraSettings.MinVertical_ClampValue;
        CurrentCamera_MaxHorizontal_ClampValue = cameraSettings.MaxHorizontal_ClampValue;
        CurrentCamera_MaxVertical_ClampValue = cameraSettings.MaxVertical_ClampValue;
    }
}