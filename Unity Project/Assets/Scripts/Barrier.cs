using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Barrier : Enemy
{
    [SerializeField] private bool _isMoving = false;
    [SerializeField] private float _movingSpeed = 0;
    [SerializeField] private List<Vector3> _movingPos = new List<Vector3>();
    private int _moveIndex = 0;
    private float _delta = 0.001f;
    private Collider _collider;

    void Start()
    {
        _collider = GetComponentInChildren<BoxCollider>();
    }

    private void Update() 
    {
        if (_isMoving)
        {
            if (_movingPos.Count > 0)
            {
                if (_moveIndex > _movingPos.Count - 1) 
                    _moveIndex = 0;
                _collider.gameObject.transform.localPosition = Vector3.MoveTowards(_collider.gameObject.transform.localPosition, 
                    _movingPos[_moveIndex], _movingSpeed * Time.deltaTime);
                if (Vector3.Distance(_collider.gameObject.transform.localPosition, _movingPos[_moveIndex]) < _delta)
                    _moveIndex++;
            }   
        }
    }
}
