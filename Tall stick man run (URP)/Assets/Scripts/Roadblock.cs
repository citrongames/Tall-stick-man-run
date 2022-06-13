using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Roadblock : MonoBehaviour
{
   [SerializeField] private float _force;
   [SerializeField] private float _radius;
   [SerializeField] private float _up;
   [SerializeField] private float _damage;
   public float Damage {get => _damage;}

   private Rigidbody _rigidbody;
   private BoxCollider _collider;
    void Start()
    {
        _rigidbody = GetComponent<Rigidbody>();
        _collider = GetComponent<BoxCollider>();
    }

    public void Explode(Vector3 position)
    {
        gameObject.layer = 7;
        _collider.isTrigger = false;
        _rigidbody.isKinematic = false;
        _rigidbody.AddExplosionForce(_force, position, _radius, _up, ForceMode.Impulse);
        Invoke("DestroyRoadblock", 2f);
    }

    private void DestroyRoadblock()
    {
        Destroy(this.gameObject);
    }
}
