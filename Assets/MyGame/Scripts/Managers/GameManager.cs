using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    //Make this random eventually but as of right now it is static.
    public List<GameObject> NotesInScene = new List<GameObject>();
    public float NotesCollected = 0;
    private float TotalNoteAmount;
    public bool AllNotesCollected = false;

    public PlayerController playerController;

    public PlayerInputController playerInputController;
    public SceneLoader _sl;

    public List<GameObject> Batteries = new List<GameObject>();

    public GameObject PauseCanvas;
    public GameObject MainUI;

    public float Minutes;
    public float Seconds;
    public bool TimeIsUp = false;
    public TextMeshProUGUI timeRemainingText;


    // Start is called before the first frame update
    void Start()
    {
        Time.timeScale = 1f;
        if (PlayerPrefs.HasKey("TotalNumberOfTimesPlayed"))
        {
            PlayerPrefs.SetInt("TotalNumberOfTimesPlayed", PlayerPrefs.GetInt("TotalNumberOfTimesPlayed") + 1);
        }

        TotalNoteAmount = NotesInScene.Count;
    }

    // Update is called once per frame
    void Update()
    {
        if (!TimeIsUp && !AllNotesCollected)
        {
            Seconds -= Time.deltaTime;
            if (Seconds <= 0 && Minutes > 0)
            {
                Minutes--;
                Seconds = 59;
            }
            else if (Minutes <= 0 && Seconds <= 0)
            {
                Debug.Log("Time is now up.");
                TimeIsUp = true;
            }

            timeRemainingText.text = "Time Until Morning:\n" + Minutes + ":" + Mathf.Round(Seconds);
        }
        else if (!AllNotesCollected && TimeIsUp)
        {
            timeRemainingText.text = "MORNING IS COMING!";
        }
        else if (AllNotesCollected)
        {
            timeRemainingText.text = "MARGRET IS DEFEATED.\nReturn to the Main Menu";
        }

        if (NotesCollected >= TotalNoteAmount)
        {
            AllNotesCollected = true;
            SetPlayerPrefTime();
        }
    }

    public void SetPlayerPrefTime()
    {
        if (PlayerPrefs.HasKey("BestTimeMinutes") && PlayerPrefs.HasKey("BestTimeSeconds"))
        {
            float PreviousTime =
                PlayerPrefs.GetFloat("BestTimeMinutes") + PlayerPrefs.GetFloat("BestTimeSeconds");

            if (PlayerPrefs.GetFloat("BestTimeSeconds") <= 9)
            {
                PreviousTime = (PlayerPrefs.GetFloat("BestTimeMinutes") * 100 +
                                PlayerPrefs.GetFloat("BestTimeSeconds"));
            }
            else
            {
                PreviousTime = (PlayerPrefs.GetFloat("BestTimeMinutes")) +
                               PlayerPrefs.GetFloat("BestTimeSeconds");
            }

            float CurrentTime = 0;
            if (Seconds <= 9)
            {
                CurrentTime = Minutes * 100 + Seconds;
            }
            else
            {
                CurrentTime = Minutes + Seconds;
            }

            //if our current time was done faster.
            if (CurrentTime > PreviousTime)
            {
                PlayerPrefs.SetFloat("BestTimeMinutes", Minutes);
                PlayerPrefs.SetFloat("BestTimeSeconds", Seconds);
            }
        }
        else
        {
            PlayerPrefs.SetFloat("BestTimeMinutes", Minutes);
            PlayerPrefs.SetFloat("BestTimeSeconds", Seconds);
        }
    }

    public void CollectNote(GameObject hitObject)
    {
        if (PlayerPrefs.HasKey("TotalNotesCollected"))
        {
            PlayerPrefs.SetInt("TotalNotesCollected", PlayerPrefs.GetInt("TotalNotesCollected") + 1);
        }

        NotesCollected++;
        NotesInScene.Remove(hitObject);
    }

    public void IncreaseDifficulty()
    {
    }

    public void CollectBattery()
    {
    }

    public void LoadMainMenu()
    {
        StartCoroutine(_sl.RealSceneLoadAsynchronousLoad("MainMenu"));
    }

    public void QuitGame()
    {
        Application.Quit();
    }

    public void PauseGame()
    {
        Time.timeScale = 0;
        PauseCanvas.SetActive(true);
        SetCursorState(false);
        MainUI.SetActive(false);
        playerController.enabled = false;

        playerInputController.pause = true;
    }

    public void UnpauseGame()
    {
        PauseCanvas.SetActive(false);
        MainUI.SetActive(true);
        SetCursorState(false);
        playerController.enabled = true;
        playerInputController.pause = false;
        Time.timeScale = 1f;
    }


    public void SetCursorState(bool newState)
    {
        Cursor.lockState = newState ? CursorLockMode.None : CursorLockMode.Locked;
    }
}