using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Finish : MonoBehaviour
{
    [SerializeField] private List<ParticleSystem> _particles = new List<ParticleSystem>();

    void Start()
    {
        //GetComponentsInChildren<ParticleSystem>(true, _particles);
    }

    public void PlayConfetti()
    {
        foreach (ParticleSystem particle in _particles)
        {
            particle.Play();
        }

    }
}
