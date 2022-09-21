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
            AudioSourcesInScene.Add(audioSource);
        }

        //As of now we assume any object marked as play on awake wants to be played from this position on awake as it would take a pretty
        //good dynamic system to manage the sounds for objects around the world. - currently its eaiser to self assign an audio source to those objects
        //and do it manually.
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
        foreach (var soundEffect in AudioSourcesInScene)
        {
            if (soundEffect != null &&
                !soundEffect.isPlaying && !soundEffect.loop)
            {
                Destroy(soundEffect);
                AudioSourcesInScene.Remove(soundEffect);
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
        s.SoundEffectAudioSource.PlayOneShot(s.SoundEffectClip);
        AudioSourcesInScene.Add(audiosource);
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