using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ConceptArtCarousel : MonoBehaviour
{
    public SceneLoader sl;
    public List<Texture> ScaryImages = new List<Texture>();

    public Transform InnerImageArea;

    public GameObject ImageCentre;
    public GameObject ImagePrevious;
    public GameObject ImageNext;

    public GameObject ImageGameObjectUI;

    public Transform MiddlePoint;
    public Transform RightPoint;
    public Transform LeftPoint;

    public int CurrentIndex;

    public float TransitionTime = 2f;
    public float CurrSlerpTime = 0;
    public float fracOfJourneyComplete = 0;
    public bool IAmSlerping = false;
    public bool IAmSlerpingNew = false;
    public float TransitionMovementMultiplier;


    public void LoadBackToMainMenu()
    {
        StartCoroutine(sl.FakeLoadSceneAsync("MainMenu", 3f));
    }

    public void GoToNextImage()
    {
        if (!IAmSlerping)
        {
            CurrSlerpTime = Time.time;
            fracOfJourneyComplete = 0;

            ImageNext = Instantiate(ImageGameObjectUI, RightPoint.transform.position, Quaternion.identity);
            ImageNext.transform.SetParent(InnerImageArea, true);

            if (CurrentIndex + 1 > ScaryImages.Count - 1)
            {
                ImageNext.transform.Find("MainImageHolder").GetComponent<RawImage>().texture = ScaryImages[0];
                CurrentIndex = 0;
            }
            else if (CurrentIndex + 1 <= ScaryImages.Count - 1)
            {
                ImageNext.transform.Find("MainImageHolder").GetComponent<RawImage>().texture =
                    ScaryImages[CurrentIndex + 1];
                CurrentIndex++;
            }

            IAmSlerping = true;
            IAmSlerpingNew = true;
        }
    }

    public void GoToPreviousImage()
    {
        if (!IAmSlerping)
        {
            CurrSlerpTime = Time.time;
            fracOfJourneyComplete = 0;

            ImagePrevious =
                Instantiate(ImageGameObjectUI, LeftPoint.transform.position, Quaternion.identity);
            ImagePrevious.transform.SetParent(InnerImageArea, true);

            if (CurrentIndex - 1 < 0)
            {
                ImagePrevious.transform.Find("MainImageHolder").GetComponent<RawImage>().texture =
                    ScaryImages[ScaryImages.Count - 1];
                CurrentIndex = ScaryImages.Count - 1;
            }
            else if (CurrentIndex - 1 >= 0)
            {
                ImagePrevious.transform.Find("MainImageHolder").GetComponent<RawImage>().texture =
                    ScaryImages[CurrentIndex - 1];
                CurrentIndex--;
            }

            IAmSlerping = true;
            IAmSlerpingNew = false;
        }
    }


    // Start is called before the first frame update
    void Start()
    {
        GameObject temp = Instantiate(ImageGameObjectUI, MiddlePoint.transform.position,
            Quaternion.identity);
        temp.transform.SetParent(InnerImageArea, true);
        temp.transform.Find("MainImageHolder").GetComponent<RawImage>().texture = ScaryImages[0];
        CurrentIndex = 0;
        ImageCentre = temp;
    }

    // Update is called once per frame
    void Update()
    {
        if (IAmSlerping)
        {
            fracOfJourneyComplete = (Time.time - CurrSlerpTime) / TransitionTime;
            if (IAmSlerpingNew)
            {
                ImageCentre.transform.position = Vector3.Slerp(ImageCentre.transform.position,
                    LeftPoint.position, TransitionMovementMultiplier * Time.deltaTime);
                ImageNext.transform.position = Vector3.Slerp(ImageNext.transform.position,
                    MiddlePoint.position, TransitionMovementMultiplier * Time.deltaTime);
            }
            else
            {
                ImageCentre.transform.position = Vector3.Slerp(ImageCentre.transform.position,
                    RightPoint.position, TransitionMovementMultiplier * Time.deltaTime);
                ImagePrevious.transform.position = Vector3.Slerp(ImagePrevious.transform.position,
                    MiddlePoint.position, TransitionMovementMultiplier * Time.deltaTime);
            }


            if (fracOfJourneyComplete >= 1f)
            {
                GameObject tempObject = ImageCentre;
                if (IAmSlerpingNew)
                {
                    ImageCentre = ImageNext;
                    ImageNext = tempObject;
                    Destroy(ImageNext);
                }
                else
                {
                    ImageCentre = ImagePrevious;
                    ImagePrevious = tempObject;
                    Destroy(ImagePrevious);
                }

                IAmSlerping = false;
            }
        }

        if (!IAmSlerping)
        {
            ImageCentre.transform.position = new Vector3(ImageCentre.transform.position.x,
                ImageCentre.transform.position.y, 0f);
        }
    }
}