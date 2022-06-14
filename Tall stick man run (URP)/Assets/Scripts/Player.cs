using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NewTypes;

public class Player : MonoBehaviour
{
    [SerializeField] private Color _defaultColor;
    [SerializeField] private Color _colorGood;
    [SerializeField] private Color _colorBad;
    [SerializeField] private float _returnColorTime;
    [SerializeField] private float _speed;
    [SerializeField] private float _rotationSpeed;
    [SerializeField] private float _headForce;
    [SerializeField] private LevelManager _levelManager;
    [SerializeField] private Transform _model;
    [SerializeField] private GameObject _head;
    [SerializeField] private List<GameObject> _bodyParts = new List<GameObject>();
    private Queue<float> _widthForChange = new Queue<float>();
    private Queue<float> _heightForChange = new Queue<float>();
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
    private MeshRenderer _meshRenderer;
    private ParticleSystem _particle;
    private CapsuleCollider _collider;
    [SerializeField] private float _capsuleBarrierMultiplyer;
    [SerializeField] private GameObject _body;
    private int _secondCollision = 0;
    
    void Start() 
    {
        _rigidBody = GetComponent<Rigidbody>();
        _origHeight = _heightBodyBone.localPosition.y;
        _oldBodyMeshPosition = _heightBodyMesh.localPosition;
        _oldBodyMeshScale = _heightBodyMesh.localScale;
        _meshRenderer = GetComponentInChildren<MeshRenderer>();
        _particle = GetComponent<ParticleSystem>();
        _collider = GetComponent<CapsuleCollider>();
    }
    public void Move(Vector3 position)
    {
        _isMoving = true;
        _position = Vector3.forward + new Vector3(position.x * _rotationSpeed, 0, 0);
        //Debug.Log("Normalize pos: " + _position);
    }
    public void Jump()
    {

    }
    private void Hit(float value)
    {
        if (value >= 0)
            _meshRenderer.sharedMaterial.SetColor("_BaseColor", _colorGood);
        else
            _meshRenderer.sharedMaterial.SetColor("_BaseColor", _colorBad);
        Invoke("ReturnColor", _returnColorTime);
    }
    public void Lost()
    {
        _particle.Stop();
        GameObject head = Instantiate(_head, _head.transform.position, transform.rotation);
        head.AddComponent<SphereCollider>();
        //Debug.Log("Head force: " + _position.normalized);
        head.AddComponent<Rigidbody>().AddForce(_position.normalized * _headForce, ForceMode.Impulse);
        head.GetComponent<Rigidbody>().interpolation = RigidbodyInterpolation.Interpolate;   
        head.layer = 9;
        _head.SetActive(false);    
    }

#region HEIGHT_CHANGE
    private void InitChangeHeight(float height)
    {
        if (_heightBodyBone != null)
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
    public void AddHeight(float height)
    {
        _heightForChange.Enqueue(height);
        Hit(height);
    }
    private void ChangeHeight(float _heightStep)
    {
        _height += _heightStep;
        if (_height >= 0)
        {
            _heightBodyMesh.localPosition = new Vector3(_heightBodyMesh.localPosition.x, 
                _oldBodyMeshPosition.y - _height / 2, _heightBodyMesh.localPosition.z);
            _heightBodyMesh.localScale = new Vector3(_heightBodyMesh.localScale.x, 
                _heightBodyMesh.localScale.y, _oldBodyMeshScale.z + _height / 3);
            _collider.height += _heightStep;
            _collider.center += new Vector3(0, _heightStep / 2, 0);
        }
        else
        {
            _height = 0;
            _addHeight = 0;
        }
    }
    private void ChangeHeightFixAngles()
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
    private void ChangeHeightFixSize()
    {
        float degrees = 0;
        int addAngles = 1;
        if (_heightBodyBone.localRotation.x  < 0)
            addAngles = -1;
        
        degrees = _heightBodyBone.localRotation.x * addAngles;  
        float c = Mathf.Tan(degrees) * _origHeight;
        Debug.Log("c1 " + c);
        float newHeight = _origHeight + _height;
        float newC = newHeight * Mathf.Tan(degrees);
        Debug.Log("c2 " + newC);
        _heightBodyBone.localPosition = new Vector3(_heightBodyBone.localPosition.x, newHeight, (newC - c) * 2 * addAngles);
    }
#endregion

#region WIDTH_CHANGE
    private void InitChangeWidth(float width)
    {
        if (_bodyParts.Count > 0)
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
    public void AddWidth(float width)
    {
        _widthForChange.Enqueue(width);
        Hit(width);
    }

    private void ChangeWidth(float widthStep)
    {
        _collider.radius += widthStep;
        if (_collider.radius <= 0) _collider.enabled = false;
        foreach(GameObject bodyPart in _bodyParts)
        {
            bodyPart.transform.localScale += new Vector3(widthStep, widthStep, 0);
            if (bodyPart.transform.localScale.x < 0 || bodyPart.transform.localScale.y < 0)
            {
                _changeWidth = false;
                bodyPart.SetActive(false);
                _widthForChange.Clear();
                _collider.enabled = false;
                _levelManager.ChangeLevelState(LevelStateEnum.Lost);
            }
        }
    }
#endregion

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

        
        if (_heightForChange.Count > 0)
        {
            if(!_changeHeight)
            {
                InitChangeHeight(_heightForChange.Peek());
            }
            else
            {
                if (((_heightBodyBone.localPosition.y - _oldHeight) * _heightDirection) < (_addHeight * _heightDirection))
                {
                    ChangeHeight(Time.deltaTime * _addHeightSpeed * _heightDirection);
                }
                else
                {
                    _changeHeight = false;
                    _heightForChange.Dequeue();
                }
            }
        }
        if (_widthForChange.Count > 0)
        {
            if (!_changeWidth)
            {
                InitChangeWidth(_widthForChange.Peek());
            }
            else
            {
                if (((_bodyParts[0].transform.localScale.x - _oldWidth) * _widthDirection) < (_addWidth * _widthDirection))
                {
                    ChangeWidth(Time.deltaTime * _addWidthSpeed * _widthDirection);
                }   
                else
                {
                    _changeWidth = false;
                    _widthForChange.Dequeue();
                }
            }
                          
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
            _model.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(_position), Time.fixedDeltaTime * _speed);
            //Debug.Log("Move to pos: " + _position);
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
            case "Gate":
                Gate gate = other.GetComponent<Gate>();

                _particle.Play();
                
                switch (gate.Type)
                {
                    case GateModificatorType.Width:
                        AddWidth(gate.Value);
                        break;
                    case GateModificatorType.Height:
                        AddHeight(gate.Value);                     
                        break;
                }
                Destroy(other.gameObject);
                break;
            case "Roadblock":
                Roadblock roadblock = other.GetComponent<Roadblock>();
                roadblock.Explode(new Vector3(transform.position.x, 0, transform.position.z));
                AddWidth(roadblock.Damage);
                AddHeight(roadblock.Damage);
                break;
            case "Barrier":
                if (_secondCollision > 1) _secondCollision = 0;
                if (_secondCollision == 1)
                {
                    GameObject body = Instantiate(_body, other.ClosestPoint(transform.position), _body.transform.rotation);
                    body.transform.localScale = new Vector3(body.transform.localScale.x, body.transform.localScale.y, _collider.transform.localScale.z * _capsuleBarrierMultiplyer);
                    body.AddComponent<Rigidbody>().AddForce(Vector3.back * _headForce, ForceMode.Impulse);
                    body.GetComponent<Rigidbody>().interpolation = RigidbodyInterpolation.Interpolate;   
                    body.layer = 9;                    
                }
                Enemy barrier = other.GetComponentInParent<Enemy>();
                AddHeight(barrier.Damage / 2);
                _secondCollision++;
                break;
            default:
                Debug.Log("default");
                break;
        }
    }

    void ReturnColor()
    {
        _meshRenderer.sharedMaterial.SetColor("_BaseColor", _defaultColor);
    }
}
