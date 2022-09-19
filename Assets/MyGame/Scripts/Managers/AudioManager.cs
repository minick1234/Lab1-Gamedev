using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    [SerializeField] public List<SoundEffect> SoundEffects = new List<SoundEffect>();

    //Test to see if i can get away with playing global sounds, otherwise i need to implement a system for global sounds.

    // Start is called before the first frame update
    void Awake()
    {
        foreach (var sound in SoundEffects)
        {
            sound.SoundEffectAudioSource = gameObject.AddComponent<AudioSource>();
            sound.SoundEffectAudioSource.clip = sound.SoundEffectClip;
            sound.SoundEffectAudioSource.volume = sound.SoundEffectVolume;
            sound.SoundEffectAudioSource.pitch = sound.SoundEffectPitch;
            sound.SoundEffectAudioSource.loop = sound.LoopSoundEffect;
            sound.SoundEffectAudioSource.priority = sound.SoundEffectPriority;
        }
    }

    public void PlaySoundEffectOneTime(string nameOfSoundEffect)
    {
        SoundEffect s = SoundEffects.Find(soundEffect => soundEffect.SoundEffectName == nameOfSoundEffect);
        if (s == null)
        {
            Debug.LogWarning("Sound: " + name + " not found!");
            return;
        }
    }

    public void PlaySoundEffectOneTimeAtLocation(string nameOfSoundEffect, Transform locationToPlaySound)
    {
        SoundEffect s = SoundEffects.Find(soundEffect => soundEffect.SoundEffectName == nameOfSoundEffect);
        if (s == null)
        {
            Debug.LogWarning("Sound: " + name + " not found!");
            return;
        }

        AudioSource.PlayClipAtPoint(s.SoundEffectClip, locationToPlaySound.position, s.SoundEffectVolume);
    }

    public void StopPlayingSoundEffect(string nameOfSoundEffect)
    {
        SoundEffect s = SoundEffects.Find(soundEffect => soundEffect.SoundEffectName == nameOfSoundEffect);
        if (s == null)
        {
            Debug.LogWarning("Sound: " + name + " not found!");
            return;
        }

        //The variances are for example to use a small fade out before we transition to another song.
        s.SoundEffectAudioSource.volume = s.SoundEffectVolume *
                                          (1f + UnityEngine.Random.Range(-s.SoundEffectVolumeVariance / 2f,
                                              s.SoundEffectVolumeVariance / 2f));
        s.SoundEffectAudioSource.pitch = s.SoundEffectPitch *
                                         (1f + UnityEngine.Random.Range(-s.SoundEffectPitchVariance / 2f,
                                             s.SoundEffectPitchVariance / 2f));

        s.SoundEffectAudioSource.Stop();
    }
}