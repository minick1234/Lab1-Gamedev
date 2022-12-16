using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    [SerializeField] public List<SoundEffect> AvailableSoundEffects = new List<SoundEffect>();

    [SerializeField] public List<AudioSource> AudioSourcesInScene = new List<AudioSource>();

    private void Awake()
    {
        foreach (var audioSource in GameObject.FindObjectsOfType<AudioSource>())
        {
            bool isIn = false;
            foreach (var insceneaudio in AudioSourcesInScene)
            {
                if (audioSource == insceneaudio)
                {
                    isIn = true;
                }
            }

            if (!isIn)
            {
                AudioSourcesInScene.Add(audioSource);
            }
        }

        //As of now we assume any object marked as play on awake wants to be played from this position on awake as it would take a pretty
        //good dynamic system to manage the sounds for objects around the world. - currently its eaiser to self assign an audio source to those objects
        //and do it manually annd then just let the awake function grab all items that start spawned in the scene.
        foreach (var soundEffect in AvailableSoundEffects)
        {
            if (soundEffect.IsPlayOnAwake)
            {
                PlaySoundEffect(soundEffect.SoundEffectName);
            }
        }
    }

    private void Update()
    {
        for (int i = 0; i < AudioSourcesInScene.Count; i++)
        {
            if (AudioSourcesInScene[i] != null &&
                !AudioSourcesInScene[i].isPlaying && !AudioSourcesInScene[i].loop)
            {
                AudioSourcesInScene[i] = AudioSourcesInScene[AudioSourcesInScene.Count - 1];
                AudioSourcesInScene.RemoveAt(AudioSourcesInScene.Count - 1);
                Destroy(AudioSourcesInScene[i]);
                break;
            }
            else if (AudioSourcesInScene[i] == null)
            {
                AudioSourcesInScene[i] = AudioSourcesInScene[AudioSourcesInScene.Count - 1];
                AudioSourcesInScene.RemoveAt(AudioSourcesInScene.Count - 1);
                break;
            }
        }
    }

    public void SpawnAudioSource(AudioSource audioSource, SoundEffect soundEffect)
    {
        soundEffect.SoundEffectAudioSource = audioSource;
        soundEffect.SoundEffectAudioSource.clip = soundEffect.SoundEffectClip;
        soundEffect.SoundEffectAudioSource.volume = soundEffect.SoundEffectVolume;
        soundEffect.SoundEffectAudioSource.pitch = soundEffect.SoundEffectPitch;
        soundEffect.SoundEffectAudioSource.loop = soundEffect.LoopSoundEffect;
        soundEffect.SoundEffectAudioSource.priority = soundEffect.SoundEffectPriority;
    }

    public void PlaySoundEffectOneShot(string nameOfSoundEffect)
    {
        SoundEffect s = AvailableSoundEffects.Find(soundEffect => soundEffect.SoundEffectName == nameOfSoundEffect);
        AudioSource audiosource = gameObject.AddComponent<AudioSource>();
        if (s == null)
        {
            Debug.LogWarning("Sound: " + nameOfSoundEffect + " not found!");
            return;
        }

        SpawnAudioSource(audiosource, s);
        s.SoundEffectAudioSource.PlayOneShot(s.SoundEffectClip);
        AudioSourcesInScene.Add(audiosource);
    }

    public void PlaySoundEffect(string nameOfSoundEffect)
    {
        SoundEffect s = AvailableSoundEffects.Find(soundEffect => soundEffect.SoundEffectName == nameOfSoundEffect);
        AudioSource audiosource = gameObject.AddComponent<AudioSource>();
        if (s == null)
        {
            Debug.LogWarning("Sound: " + nameOfSoundEffect + " not found!");
            return;
        }

        SpawnAudioSource(audiosource, s);
        s.SoundEffectAudioSource.Play();
        AudioSourcesInScene.Add(audiosource);
    }

    public void StopSoundEffect(string nameOfSoundEffect)
    {
        SoundEffect s = AvailableSoundEffects.Find(soundEffect => soundEffect.SoundEffectName == nameOfSoundEffect);

        foreach (var audioSource in AudioSourcesInScene)
        {
            if (audioSource.clip == s.SoundEffectClip)
            {
                //this is the right clip
                s.SoundEffectAudioSource.Stop();
                break;
            }
        }

        return;
    }


    public void PlaySoundAtGameObject(string nameOfSoundEffect, GameObject gameObjectToSpawnAt)
    {
        SoundEffect s = AvailableSoundEffects.Find(soundEffect => soundEffect.SoundEffectName == nameOfSoundEffect);
        AudioSource audiosource = gameObjectToSpawnAt.AddComponent<AudioSource>();
        if (s == null)
        {
            Debug.LogWarning("Sound: " + nameOfSoundEffect + " not found!");
            return;
        }

        SpawnAudioSource(audiosource, s);
        s.SoundEffectAudioSource.PlayOneShot(s.SoundEffectClip);
        AudioSourcesInScene.Add(audiosource);
    }
}