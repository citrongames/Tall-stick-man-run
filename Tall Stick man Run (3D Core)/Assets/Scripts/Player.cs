using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    [SerializeField] private int _speed;
    [SerializeField] private int _rotationSpeed;
    [SerializeField] private LevelManager _levelManager;
    [SerializeField] private Transform _model;
    [SerializeField] private List<GameObject> _bodyParts = new List<GameObject>();
    [SerializeField] private Transform _heightBodyBone;
    [SerializeField] private Transform _heightBodyMesh;
    [SerializeField] private float _addHeightSpeed = 0;
    private float _addHeight = 0;
    private float _height = 0;
    private float _origHeight;
    private float _oldHeight;
    private bool _changeHeight = false;
    private int _heightDirection = 1;
    [SerializeField] private float _addWidthSpeed = 0;
    private float _addWidth = 0;
    private float _oldWidth;
    private int _widthDirection = 1;
    private bool _changeWidth = false;
    private Vector3 _oldBodyMeshPosition;
    private Vector3 _oldBodyMeshScale;
    private bool _isMoving = false;
    private Rigidbody _rigidBody;
    private Vector3 _position;
    
    void Start() 
    {
        _rigidBody = GetComponent<Rigidbody>();
        _origHeight = _heightBodyBone.localPosition.y;
        _oldBodyMeshPosition = _heightBodyMesh.localPosition;
        _oldBodyMeshScale = _heightBodyMesh.localScale;
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

    public void AddHeight(float height)
    {
        if (!_changeHeight && (height + _height > 0))
        {
            _changeHeight = true;
            _addHeight = height;
            _oldHeight = _heightBodyBone.localPosition.y;
            if (height < 0)
                _heightDirection = -1;
            else
                _heightDirection = 1;
        }
    }
    public void ChangeHeight(float _heightStep)
    {
        _height += _heightStep;
        if (_height >= 0)
        {
            _heightBodyMesh.localPosition = new Vector3(_heightBodyMesh.localPosition.x, 
                _oldBodyMeshPosition.y - _height / 2, _heightBodyMesh.localPosition.z);
            _heightBodyMesh.localScale = new Vector3(_heightBodyMesh.localScale.x, 
                _heightBodyMesh.localScale.y, _oldBodyMeshScale.z + _height / 3);
        }
        else
        {
            _height = 0;
        }
    }
    public void ChangeHeightFixAngles()
    {
        float degrees = 0;
        int addAngles = 1;
        if (_heightBodyBone.localRotation.x  < 0)
            addAngles = -1;
        
        degrees = _heightBodyBone.localRotation.x * addAngles;  
        float c = Mathf.Tan(degrees) * _origHeight;
        float newHeight = _origHeight + _height;
        degrees = c / newHeight;

        _heightBodyBone.localPosition = new Vector3(_heightBodyBone.localPosition.x, newHeight, _heightBodyBone.localPosition.z);
        _heightBodyBone.localRotation = new Quaternion(degrees * addAngles, 
            _heightBodyBone.localRotation.y, _heightBodyBone.localRotation.z, _heightBodyBone.localRotation.w);
    }

    public void AddWidth(float width)
    {
        if (!_changeWidth && _bodyParts.Count > 0)
        {
            _changeWidth = true;
            _addWidth = width;
            _oldWidth = _bodyParts[0].transform.localScale.x;
            if (width < 0)
                _widthDirection = -1;
            else
                _widthDirection = 1;
        }
    }

    public void ChangeWidth(float _widthStep)
    {
        foreach(GameObject bodyPart in _bodyParts)
        {
            bodyPart.transform.localScale += new Vector3(_widthStep, _widthStep, 0);
            if (bodyPart.transform.localScale.x < 0 || bodyPart.transform.localScale.y < 0)
            {
                _changeWidth = false;
                bodyPart.SetActive(false);
            }
        }
    }

    private void Update() 
    {
        if(Input.GetKeyDown("c"))
        {
            AddWidth(1);
        }   
        if(Input.GetKeyDown("x"))
        {
            AddWidth(-1);
        }   
        if(Input.GetKeyDown("d"))
        {
            AddHeight(2);
        }   
        if(Input.GetKeyDown("s"))
        {
            AddHeight(-2);
        }   

        
        if (_changeHeight)
        {
            if (((_heightBodyBone.localPosition.y - _oldHeight) * _heightDirection) <= (_addHeight * _heightDirection))
            {
                ChangeHeight(Time.deltaTime * _addHeightSpeed * _heightDirection);
            }
            else
                _changeHeight = false;
        }
        if (_changeWidth)
        {
            if (((_bodyParts[0].transform.localScale.x - _oldWidth) * _widthDirection) <= (_addWidth * _widthDirection))
            {
                ChangeWidth(Time.deltaTime * _addWidthSpeed * _widthDirection);
            }   
            else
            _changeWidth = false;             
        }
    }

    private void LateUpdate()
    {
        ChangeHeightFixAngles();
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
