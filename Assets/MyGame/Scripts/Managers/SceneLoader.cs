using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    
    public IEnumerator RealSceneLoadAsynchronousLoad(string sceneToLoad)
    {
        AsyncOperation ao = SceneManager.LoadSceneAsync(sceneToLoad);
        ao.allowSceneActivation = false;

        while (!ao.isDone)
        {
            float progress = Mathf.Clamp01(ao.progress / 0.9f);
     //       LoadingText.text = "Loading: " + (int)(progress * 100) + "%";

            if (ao.progress == 0.9f)
                ao.allowSceneActivation = true;

            yield return null;
        }
    }
    
}
