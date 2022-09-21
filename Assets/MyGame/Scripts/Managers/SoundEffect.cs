using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SoundEffect
{
    [Header("Main Sound Effect Settings")] public string SoundEffectName;
    public AudioClip SoundEffectClip;

    [Header("Volume Settings")] [Range(0f, 1f)]
    public float SoundEffectVolume;

    [Header("Pitch Setting")] [Range(0f, 1f)]
    public float SoundEffectPitch;

    [Header("General Settings")] [Range(0, 256)]
    public int SoundEffectPriority;

    public bool LoopSoundEffect;

    public bool IsPlayOnAwake;
    
    [Header("Debugging Purposes")] public AudioSource SoundEffectAudioSource = new AudioSource();
}