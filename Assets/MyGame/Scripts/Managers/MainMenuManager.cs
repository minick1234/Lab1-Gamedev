using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuManager : MonoBehaviour
{
    public SceneLoader _sl;

    public GameObject FirstTimeNameCanvas;
    public GameObject SettingsCanvas;
    public TextMeshProUGUI InputFieldTextSettings;
    
    public GameObject MainMenuTitleCanvas;
    public GameObject ButtonPanelCanvas;
    public TextMeshProUGUI InputFieldText;
    public string currName;

    public TextMeshProUGUI nameText;
    public TextMeshProUGUI BestTimeText;
    public TextMeshProUGUI TotalNotesCollectedText;
    public TextMeshProUGUI numberOfTimesPlayedText;


    public void LoadMainGame()
    {
        StartCoroutine(_sl.RealSceneLoadAsynchronousLoad("Prototyping"));
    }


    public void LoadConceptArt()
    {
        StartCoroutine(_sl.RealSceneLoadAsynchronousLoad("ConceptArt"));
    }

    public void ExitGame()
    {
        Application.Quit();
    }

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
            PlayerPrefs.SetInt("BestTimeMinutes", 00);
        }

        if (PlayerPrefs.HasKey("BestTimeSeconds"))
        {
            PlayerPrefs.SetInt("BestTimeSeconds", 00);
        }
    }


    public void LoadSettingsCanvas()
    {
        SettingsCanvas.SetActive(true);
        MainMenuTitleCanvas.SetActive(false);
        ButtonPanelCanvas.SetActive(false);
    }

    public void CloseSettingsCanvas()
    {
        SettingsCanvas.SetActive(false);
        MainMenuTitleCanvas.SetActive(true);
        ButtonPanelCanvas.SetActive(true);
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
            PlayerPrefs.SetInt("BestTimeMinutes", 00);
        }

        if (!PlayerPrefs.HasKey("BestTimeSeconds"))
        {
            PlayerPrefs.SetInt("BestTimeSeconds", 00);
        }

        if (!PlayerPrefs.HasKey("PlayerName") || (PlayerPrefs.GetString("PlayerName").Length <= 1) ||
            PlayerPrefs.GetString("PlayerName") == null)
        {
            MainMenuTitleCanvas.SetActive(false);
            ButtonPanelCanvas.SetActive(false);
            FirstTimeNameCanvas.SetActive(true);
        }
    }

    public void UpdateChangedText()
    {
        if (SettingsCanvas.activeInHierarchy)
        {
            currName = InputFieldTextSettings.text;
        }
        else
        {
            currName = InputFieldText.text;
        }
    }


    public void SetPlayerName()
    {
        if (currName.Length is <= 1 or >= 15)
        {
            Debug.Log("Invalid player name.");
            return;
        }

        if (SettingsCanvas.activeInHierarchy)
        {
            PlayerPrefs.SetString("PlayerName", currName);
            InputFieldText.text = "";
            currName = "";
        }
        else
        {
            PlayerPrefs.SetString("PlayerName", currName);
            FirstTimeNameCanvas.SetActive(false);
            MainMenuTitleCanvas.SetActive(true);
            ButtonPanelCanvas.SetActive(true);
            InputFieldText.text = "";
            currName = "";
        }
    }


    // Update is called once per frame
    void Update()
    {
        UpdateChangedText();

        if (!PlayerPrefs.HasKey("PlayerName") || (PlayerPrefs.GetString("PlayerName").Length <= 1) ||
            PlayerPrefs.GetString("PlayerName") == null)
        {
            MainMenuTitleCanvas.SetActive(false);
            ButtonPanelCanvas.SetActive(false);
            FirstTimeNameCanvas.SetActive(true);
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
                PlayerPrefs.SetInt("BestTimeMinutes", 00);
            }

            if (PlayerPrefs.HasKey("BestTimeSeconds"))
            {
                PlayerPrefs.SetInt("BestTimeSeconds", 00);
            }

            PlayerPrefs.SetString("PlayerName", "");
        }

        nameText.text = "Name:\n" + PlayerPrefs.GetString("PlayerName");
        BestTimeText.text = "Best Time:\n" + PlayerPrefs.GetFloat("BestTimeMinutes") + ":" +
                            Mathf.Round(PlayerPrefs.GetFloat("BestTimeSeconds"));
        numberOfTimesPlayedText.text = "Times Played With Margret:\n" + PlayerPrefs.GetInt("TotalNumberOfTimesPlayed");
        TotalNotesCollectedText.text = "Total Notes Stolen:\n" + PlayerPrefs.GetInt("TotalNotesCollected");
    }
}