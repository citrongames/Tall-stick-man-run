using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BarrierSpin : Enemy
{
    [SerializeField] private bool _spin;
    [SerializeField] private bool _spinClockwise;
    [SerializeField] private float _speed;
    [SerializeField] private Transform _spinPoint;

    void Update()
    {
        if (_spin)
        {
            int direction;
            if (_spinClockwise) direction = 1;
            else direction = -1;
            _spinPoint.Rotate(0, _speed * Time.deltaTime * direction, 0);
        }
    }
}
