using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SoundEffect : MonoBehaviour
{
    public string SoundEffectName;
    public AudioClip SoundEffectClip;

    [Range(0f, 1f)] public float SoundEffectVolume;
    public float SoundEffectVolumeVariance;
    public bool LoopSoundEffect;

    [Range(0f, 1f)] public float SoundEffectPitch;
    public float SoundEffectPitchVariance;

    [Range(0, 256)] public int SoundEffectPriority;

    public AudioSource SoundEffectAudioSource = new AudioSource();
}