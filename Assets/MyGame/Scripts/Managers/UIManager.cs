using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;

public class UIManager : MonoBehaviour
{
    [SerializeField] public PlayerController PlayerController;

    [SerializeField] public Texture HandIcon, NoteIcon, Standard_Crosshair;

    [SerializeField] public GameObject CrossHair_UI;

    [SerializeField] public TextMeshProUGUI InteractText;

    [SerializeField] public TextMeshProUGUI TotalNotesCollectedText;

    // Start is called before the first frame update
    void Start()
    {
        CrossHair_UI.GetComponent<RawImage>().texture = Standard_Crosshair;
    }

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
        else
        {
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
}