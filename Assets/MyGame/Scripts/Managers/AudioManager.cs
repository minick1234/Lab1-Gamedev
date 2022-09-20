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
    }

    private void Update()
    {
        foreach (var soundEffect in AudioSourcesInScene)
        {
            if (soundEffect != null &&
                !soundEffect.isPlaying)
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

    public void PlaySoundEffectOneTime(string nameOfSoundEffect)
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

    // public void StopPlayingSoundEffect(string nameOfSoundEffect, AudioSource objectsAudioSource)
    // {
    //     SoundEffect s = AudioSourcesInScene.Find(soundEffect =>
    //         soundEffect.SoundEffectName == nameOfSoundEffect &&
    //         soundEffect.SoundEffectAudioSource == objectsAudioSource);
    //     if (s == null)
    //     {
    //         Debug.LogWarning("Sound: " + nameOfSoundEffect + " not found!");
    //         return;
    //     }
    //
    //     //The variances are for example to use a small fade out before we transition to another song.
    //     s.SoundEffectAudioSource.volume = s.SoundEffectVolume *
    //                                       (1f + UnityEngine.Random.Range(-s.SoundEffectVolumeVariance / 2f,
    //                                           s.SoundEffectVolumeVariance / 2f));
    //     s.SoundEffectAudioSource.pitch = s.SoundEffectPitch *
    //                                      (1f + UnityEngine.Random.Range(-s.SoundEffectPitchVariance / 2f,
    //                                          s.SoundEffectPitchVariance / 2f));
    //
    //     s.SoundEffectAudioSource.Stop();
    //     AudioSourcesInScene.Remove(s);
    // }

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