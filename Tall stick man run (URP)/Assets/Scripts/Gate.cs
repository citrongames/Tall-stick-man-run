using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using NewTypes;
using UnityEngine.UI;

public class Gate : MonoBehaviour
{
    [SerializeField] private GateModificatorType _type = GateModificatorType.Width;
    [SerializeField] private float _value = 0;
    [SerializeField] private bool _isMoving = false;
    [SerializeField] private float _movingSpeed = 0;
    [SerializeField] private List<Vector3> _movingPos = new List<Vector3>();
    [SerializeField] private List<Image> _images = new List<Image>();
    private int _moveIndex = 0;
    private float _delta = 0.001f;
    public float Value 
    {
        get => _value;
    }
    public GateModificatorType Type
    {
        get => _type;
    }

    private void Start() 
    {
        TextMeshProUGUI insideTMP = null;

        TextMeshProUGUI[] texts = GetComponentsInChildren<TextMeshProUGUI>();
        foreach(TextMeshProUGUI text in texts)
        {
            switch(text.name)
            {
                case "TXT_Inside":
                    insideTMP = text;
                    break;
                default:
                    break;
            }
        }
        //Image[] images = GetComponentsInChildren<Image>(true);
        switch(_type)
        {
            case GateModificatorType.Width:
                if (_value >= 0)
                    _images[2].gameObject.SetActive(true);
                else
                    _images[3].gameObject.SetActive(true);
                break;
            case GateModificatorType.Height:
                if (_value >= 0)
                    _images[0].gameObject.SetActive(true);
                else
                    _images[1].gameObject.SetActive(true);
                break;
            default:
                break;
            }


        insideTMP.text = (_value * 100).ToString("+#;-#;0");
    }

    private void Update() 
    {
        if (_isMoving)
        {
            if (_movingPos.Count > 0)
            {
                if (_moveIndex > _movingPos.Count - 1) 
                    _moveIndex = 0;
                transform.position = Vector3.MoveTowards(transform.position, _movingPos[_moveIndex], _movingSpeed * Time.deltaTime);
                if (Vector3.Distance(transform.position, _movingPos[_moveIndex]) < _delta)
                    _moveIndex++;
            }   
        }
    }
}
