using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ScoreBoardDisplay : MonoBehaviour
{
    public SceneLoader _sl;

    public TextMeshPro nameText;
    public TextMeshPro BestTimeText;
    public TextMeshPro TotalNotesCollectedText;
    public TextMeshPro numberOfTimesPlayedText;

    public void ResetAllStats()
    {
        if (PlayerPrefs.HasKey("TotalNotesCollected"))
        {
            PlayerPrefs.SetInt("TotalNotesCollected", 0);
        }

        if (PlayerPrefs.HasKey("TotalNumberOfTimesPlayed"))
        {
            PlayerPrefs.SetInt("TotalNumberOfTimesPlayed", 0);
        }

        if (PlayerPrefs.HasKey("BestTimeMinutes"))
        {
            PlayerPrefs.SetFloat("BestTimeMinutes", 00);
        }

        if (PlayerPrefs.HasKey("BestTimeSeconds"))
        {
            PlayerPrefs.SetFloat("BestTimeSeconds", 00);
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        Time.timeScale = 1f;
        if (!PlayerPrefs.HasKey("TotalNotesCollected"))
        {
            PlayerPrefs.SetInt("TotalNotesCollected", 0);
        }

        if (!PlayerPrefs.HasKey("TotalNumberOfTimesPlayed"))
        {
            PlayerPrefs.SetInt("TotalNumberOfTimesPlayed", 0);
        }

        if (!PlayerPrefs.HasKey("BestTimeMinutes"))
        {
            PlayerPrefs.SetFloat("BestTimeMinutes", 00);
        }

        if (!PlayerPrefs.HasKey("BestTimeSeconds"))
        {
            PlayerPrefs.SetFloat("BestTimeSeconds", 00);
        }
    }


    // Update is called once per frame
    void Update()
    {
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            StartCoroutine(_sl.FakeLoadSceneAsync("MainMenu", 3f));
        }


        if (Input.GetKeyDown(KeyCode.B))
        {
            Debug.Log("b was pressed dawg.");
            if (PlayerPrefs.HasKey("TotalNotesCollected"))
            {
                PlayerPrefs.SetInt("TotalNotesCollected", 0);
            }

            if (PlayerPrefs.HasKey("TotalNumberOfTimesPlayed"))
            {
                PlayerPrefs.SetInt("TotalNumberOfTimesPlayed", 0);
            }

            if (PlayerPrefs.HasKey("BestTimeMinutes"))
            {
                PlayerPrefs.SetFloat("BestTimeMinutes", 00);
            }

            if (PlayerPrefs.HasKey("BestTimeSeconds"))
            {
                PlayerPrefs.SetFloat("BestTimeSeconds", 00);
            }

            PlayerPrefs.SetString("PlayerName", "");
        }

        nameText.text = PlayerPrefs.GetString("PlayerName");
        if (PlayerPrefs.GetFloat("BestTimeSeconds") <= 9)
        {
            BestTimeText.text = PlayerPrefs.GetFloat("BestTimeMinutes") + ":0" +
                                Mathf.Round(PlayerPrefs.GetFloat("BestTimeSeconds"));
        }
        else
        {
            BestTimeText.text = PlayerPrefs.GetFloat("BestTimeMinutes") + ":" +
                                Mathf.Round(PlayerPrefs.GetFloat("BestTimeSeconds"));
        }

        numberOfTimesPlayedText.text = PlayerPrefs.GetInt("TotalNumberOfTimesPlayed").ToString();
        TotalNotesCollectedText.text = PlayerPrefs.GetInt("TotalNotesCollected").ToString();
    }
}