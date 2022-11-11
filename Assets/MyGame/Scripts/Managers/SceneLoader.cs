using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SceneLoader : MonoBehaviour
{
    public GameObject MainCanvas;
    public GameObject LoadingCanvas;
    public RawImage LoadingCanvasBackgroundImage;

    public List<Texture> BackgroundImages = new List<Texture>();

    //
    // public IEnumerator RealSceneLoadAsynchronousLoad(string sceneToLoad)
    // {
    //     AsyncOperation ao = SceneManager.LoadSceneAsync(sceneToLoad);
    //     ao.allowSceneActivation = false;
    //
    //     while (!ao.isDone)
    //     {
    //         float progress = Mathf.Clamp01(ao.progress / 0.9f);
    //         //       LoadingText.text = "Loading: " + (int)(progress * 100) + "%";
    //
    //         if (ao.progress == 0.9f)
    //             ao.allowSceneActivation = true;
    //
    //         yield return null;
    //     }
    // }


    //Since the above method loads the game to fast, in order to see the "loading" for the assignment requirements i use this function instead
    public IEnumerator FakeLoadSceneAsync(string sceneToLoad, float LoadTime)
    {
        Time.timeScale = 1;
        int RandomIndex = Random.Range(0, BackgroundImages.Count);
        LoadingCanvasBackgroundImage.texture = BackgroundImages[RandomIndex];

        if (sceneToLoad == "MainMenu" && SceneManager.GetActiveScene().name == "MainMenu")
        {
            Debug.Log("i am in here 22222.");
            LoadingCanvas.SetActive(true);
            MainCanvas.SetActive(false);
            float currLoadTime = 0;
            float LastTenPercent = LoadTime - (LoadTime * 0.9f);
            while (currLoadTime <= LoadTime)
            {
                float progress = Mathf.Clamp01(currLoadTime / (LoadTime - LastTenPercent));
                yield return new WaitForSeconds(1f);
                currLoadTime++;
            }

            LoadingCanvas.SetActive(false);
            MainCanvas.SetActive(true);
        }
        else
        {
            Time.timeScale = 1;
            Debug.Log("i am in here.");
            LoadingCanvas.SetActive(true);
            MainCanvas.SetActive(false);
            AsyncOperation ao = SceneManager.LoadSceneAsync(sceneToLoad);
            ao.allowSceneActivation = false;
            float currLoadTime = 0;
            float LastTenPercent = LoadTime - (LoadTime * 0.9f);
            while (currLoadTime <= LoadTime)
            {
                float progress = Mathf.Clamp01(ao.progress / 0.9f);
                Debug.Log(progress);

                if (ao.progress >= 0.9f && (currLoadTime / (LoadTime - LastTenPercent)) >= 0.9f)
                {
                    Debug.Log("Curretly checking progress");
                    ao.allowSceneActivation = true;
                }

                yield return new WaitForSeconds(1f);
                currLoadTime++;
            }

            LoadingCanvas.SetActive(false);
        }
    }
}