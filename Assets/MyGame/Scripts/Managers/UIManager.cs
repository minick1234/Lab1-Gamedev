using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;

public class UIManager : MonoBehaviour
{
    [SerializeField] public PlayerController PlayerController;

    [SerializeField] public Texture HandIcon, NoteIcon, Standard_Crosshair, ComputerIcon, FlashlightIcon;

    [SerializeField] public GameObject CrossHair_UI;
    [SerializeField] public GameObject CrossHair_UI_For_Flashlight_Eye;
    [SerializeField] public GameObject PlayerUI, ComputerUI;
    
    [SerializeField] public TextMeshProUGUI InteractText;
    [SerializeField] public TextMeshProUGUI TotalNotesCollectedText;

    // Start is called before the first frame update
    void Start()
    {
        CrossHair_UI.GetComponent<RawImage>().texture = Standard_Crosshair;
    }

    //this is a really messy solution but i am tired and want to get this done in a quick and dirty fashion, if anything can always be refactored.
    // Update is called once per frame
    void Update()
    {
        if ((CrossHair_UI.GetComponent<RawImage>().texture == HandIcon ||
             CrossHair_UI.GetComponent<RawImage>().texture == NoteIcon) &&
            PlayerController.tempHitObject.transform.gameObject != null)
        {
            InteractText.text = "Press E to pick up " + PlayerController.tempHitObject.transform.tag;
            InteractText.gameObject.SetActive(true);
        }
        else if (CrossHair_UI.GetComponent<RawImage>().texture == ComputerIcon)
        {
            CrossHair_UI_For_Flashlight_Eye.GetComponent<RawImage>().texture = ComputerIcon;

            CrossHair_UI.SetActive(false);
            CrossHair_UI_For_Flashlight_Eye.SetActive(true);
            InteractText.text = "Press E to view " + PlayerController.tempHitObject.transform.name;
            InteractText.gameObject.SetActive(true);
        }
        else if (CrossHair_UI.GetComponent<RawImage>().texture == FlashlightIcon)
        {
            CrossHair_UI_For_Flashlight_Eye.GetComponent<RawImage>().texture = FlashlightIcon;
            CrossHair_UI.SetActive(false);
            CrossHair_UI_For_Flashlight_Eye.SetActive(true);
            InteractText.text = "Press E to pick up " + PlayerController.tempHitObject.transform.tag;
            InteractText.gameObject.SetActive(true);
        }
        else
        {
            CrossHair_UI.SetActive(true);
            CrossHair_UI_For_Flashlight_Eye.SetActive(false);
            InteractText.gameObject.SetActive(false);
        }
    }


    public void SetCrossHairTexture(Texture crossHairTextureToSetTo)
    {
        var color = CrossHair_UI.GetComponent<RawImage>().color;
        if (crossHairTextureToSetTo == Standard_Crosshair)
        {
            //this is 5/255 as i need the value normalized between 0 and 1.
            color.a = 0.01960784313725490196078431372549f;
        }
        else
        {
            color.a = 1f;
        }

        CrossHair_UI.GetComponent<RawImage>().color = color;
        CrossHair_UI.GetComponent<RawImage>().texture = crossHairTextureToSetTo;
    }

    public void SwitchBetweenUIType(bool IsPlayerUI)
    {
        if (IsPlayerUI)
        {
            PlayerUI.SetActive(true);
            ComputerUI.SetActive(false);
        }
        else
        {
            ComputerUI.SetActive(true);
            PlayerUI.SetActive(false);
        }
    }
}