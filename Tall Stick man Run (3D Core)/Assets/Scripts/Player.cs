using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour, IPlayer
{
    [SerializeField] private int _speed;
    
    private bool _isMoving = false;
    private Rigidbody _rigidBody;
    private Vector3 _position;
    [SerializeField] private Transform _model;

    void Start() 
    {
        _rigidBody = GetComponent<Rigidbody>();
        Debug.Log(_model.name);
    }

    public void Move(Vector3 position)
    {
        _isMoving = true;
        _position = position;
    }

    public void Jump()
    {

    }
    public void Hit()
    {

    }
    public void ChangeHeight()
    {

    }
    public void ChangeWidth()
    {

    }
    public void Finished()
    {

    }

    void FixedUpdate() 
    {
        if (_isMoving)
        {
            _rigidBody.MovePosition(transform.position + (_position * Time.deltaTime * _speed)); 

            //create the rotation we need to be in to look at the target
            Quaternion _lookRotation = Quaternion.LookRotation(_position);    
            //rotate us over time according to speed until we are in the required rotation
            _model.rotation = Quaternion.Slerp(transform.rotation, _lookRotation, Time.deltaTime * _speed);

            _isMoving = false;  
        } 
    }
}
