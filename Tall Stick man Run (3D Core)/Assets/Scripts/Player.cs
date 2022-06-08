using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour, IPlayer
{
    [SerializeField] private int _speed;
    [SerializeField] private int _rotationSpeed;
    [SerializeField] private LevelManager _levelManager;
    [SerializeField] private Transform _model;
    [SerializeField] private List<GameObject> _bodyParts = new List<GameObject>();
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
        foreach(GameObject bodyPart in _bodyParts)
        {
            bodyPart.transform.localScale += new Vector3(0.1f, 0.1f, 0);
        }
    }

    private void Update() 
    {
        if(Input.GetKeyDown("s"))
        {
            ChangeWidth();
        }    
    }

    public void Finished()
    {

    }

    void FixedUpdate() 
    {
        
        if (_isMoving)
        {
            _rigidBody.velocity = _position * _speed;
            Quaternion _lookRotation = Quaternion.LookRotation(_position);    
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
                other.GetComponent<Finish>().PlayConfetti();
                break;
            case "Diamonds":
                other.GetComponent<Diamond>().Collect();
                break;
        }
    }
}
