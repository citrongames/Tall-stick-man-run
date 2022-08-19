using UnityEngine;

public class Enemy : MonoBehaviour
{
    [SerializeField] private float _damage;
    public float Damage {get => _damage;}
}
