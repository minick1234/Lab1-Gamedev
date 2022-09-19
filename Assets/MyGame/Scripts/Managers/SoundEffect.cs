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

    public float SoundEffectVolumeVariance;
    public float VolumeIntensity;

    [Header("Pitch Setting")] [Range(0f, 1f)]
    public float SoundEffectPitch;

    public float SoundEffectPitchVariance;
    public float PitchIntensity;

    [Header("General Settings")] [Range(0, 256)]
    public int SoundEffectPriority;

    public bool LoopSoundEffect;

    //Might make this more specific like a custom enum, in which you define a background sound, or item sound, or whatever, to make it easier to search for
    //then we can make it play a random sound based on the valid inputs of the enum.
    //so for example like jumpscare sounds can have like a few different clips and then we can pick a random sound from that list.
    //to make this super dynamic, i can make it store which sound has been used and then make sure if we generate and its the same sound we regenerate
    //and then allow that to be pooled after so that the sound is always different and at the minimum chance, it will be at least one different sound between 
    //the effects to break it up.
    public bool IsBackGroundMusic;

    [Header("Debugging Purposes")] public AudioSource SoundEffectAudioSource = new AudioSource();
}