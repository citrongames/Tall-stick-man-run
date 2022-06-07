using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour, IPlayer
{
    [SerializeField] private int _speed;
    [SerializeField] private int _rotationSpeed;
    [SerializeField] private LevelManager _levelManager;
    [SerializeField] private Transform _model;
    private bool _isMoving = false;
    private Rigidbody _rigidBody;
    private Vector3 _position;
    
    void Start() 
    {
        _rigidBody = GetComponent<Rigidbody>();
    }

    public void Move(Vector3 position)
    {
        _isMoving = true;
        _position = Vector3.forward + new Vector3(position.x / _rotationSpeed, 0, 0);
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
            _rigidBody.velocity = _position * _speed;
            //_rigidBody.MovePosition(transform.position + (_position * Time.deltaTime * _speed)); 
            //_rigidBody.MovePosition(transform.position + Vector3.left);
            //create the rotation we need to be in to look at the target
            Quaternion _lookRotation = Quaternion.LookRotation(_position);    
            //rotate us over time according to speed until we are in the required rotation
            _model.rotation = Quaternion.Slerp(transform.rotation, _lookRotation, Time.fixedDeltaTime * _speed);

            _isMoving = false;  
        } 
    }

    void OnTriggerEnter(Collider other) 
    {
        switch (other.tag)
        {
            case "LevelFinish":
                _levelManager.ChangeLevelState(NewTypes.LevelStateEnum.Won);
                break;
            case "Diamonds":
                other.GetComponent<Diamond>().Collect();
                break;
        }
    }
}
