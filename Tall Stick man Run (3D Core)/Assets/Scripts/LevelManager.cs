using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using NewTypes;

public class LevelManager : MonoBehaviour
{
    [SerializeField] private GameData _gameData;
    [SerializeField] private List<GameObject> _disableIngame;
    private LevelStateEnum _levelState;

    [SerializeField] private Animator _playerAnimator;
    [SerializeField] private Player _playerScript;

    //Input
    private int _fakeTouchId = 99;
    private TouchInfo _touchInfo;

    void Start()
    {
        _levelState = LevelStateEnum.WaitingTap;
        _touchInfo = new TouchInfo(Vector3.zero, Vector3.zero, false, TouchPhase.Canceled);
    }

    void Update()
    {
        ReadInput();
        LevelStateManager();
    }

    void LevelStateManager()
    {
        switch (_levelState)
        {
            case LevelStateEnum.WaitingTap:
                if (_touchInfo.Phase == TouchPhase.Ended && !_touchInfo.IsInteractableUI)
                {
                    ChangeLevelState(LevelStateEnum.Ingame);
                }
                break;
            case LevelStateEnum.Ingame:
                if (_touchInfo.Phase == TouchPhase.Began && !_touchInfo.IsInteractableUI)
                {
                    //run anim
                    _playerScript.Move(Vector3.forward + new Vector3(_touchInfo.Direction.x / 300, 0, 0));
                    _playerAnimator.SetBool("IsRunning", true);
                    
                }
                else if (_touchInfo.Phase == TouchPhase.Ended && !_touchInfo.IsInteractableUI)
                {
                    //idle anim
                    _playerAnimator.SetBool("IsRunning", false);
                }
                else if (_touchInfo.Phase == TouchPhase.Moved && !_touchInfo.IsInteractableUI)
                {
                    _playerScript.Move(Vector3.forward + new Vector3(_touchInfo.Direction.x / 300, 0, 0));
                }
                break;
            case LevelStateEnum.Settings:
                break;
            case LevelStateEnum.Shop:
                break;
            case LevelStateEnum.Lost:
                break;
            case LevelStateEnum.Won:
                break;
        }
    }

    private void ChangeLevelState(LevelStateEnum newLevelState)
    {
        //check old level state and based on it clean up some things
        switch (_levelState)
        {
            case LevelStateEnum.WaitingTap:
                if (newLevelState == LevelStateEnum.Ingame)
                {
                    foreach(GameObject gameObject in _disableIngame)
                    {
                        gameObject.SetActive(false);
                    }
                }
                break;
            case LevelStateEnum.Ingame:
                break;
            case LevelStateEnum.Settings:
                break;
            case LevelStateEnum.Shop:
                break;
            case LevelStateEnum.Lost:
                break;
            case LevelStateEnum.Won:
                break;
        }
        _levelState = newLevelState;
    }
    private void ReadInput()
    {
        _touchInfo.Phase = TouchPhase.Canceled;
        //If on mobile
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            TouchEvents(touch.fingerId, touch.position, touch.phase);
        }
        //else emulate with mouse button
        else
        {
            if (Input.GetMouseButtonDown(0))
            {
                TouchEvents(_fakeTouchId, Input.mousePosition, TouchPhase.Began);
            }
            else if (Input.GetMouseButton(0))
            {
                TouchEvents(_fakeTouchId, Input.mousePosition, TouchPhase.Moved);
            }
            if (Input.GetMouseButtonUp(0))
            {
                TouchEvents(_fakeTouchId, Input.mousePosition, TouchPhase.Ended);
            }
        }
    }

    private void TouchEvents(int touchId, Vector3 touchPos, TouchPhase touchPhase)
    {    
        _touchInfo.Phase = touchPhase;
        switch (touchPhase)
        {
            case TouchPhase.Began:
                _touchInfo.StartPos = Camera.main.ScreenToWorldPoint(new Vector3(touchPos.x, touchPos.y, Camera.main.farClipPlane));
                break;
            case TouchPhase.Moved:
                _touchInfo.Direction = Camera.main.ScreenToWorldPoint(new Vector3(touchPos.x, touchPos.y, Camera.main.farClipPlane)) - _touchInfo.StartPos;
                Debug.Log(_touchInfo.Direction);
                break;
            case TouchPhase.Ended:
                
                break;
        }
        
        _touchInfo.IsInteractableUI = false;
        PointerEventData pointerEventData = new PointerEventData(EventSystem.current);
        pointerEventData.position = touchPos;
        List<RaycastResult> raycastResults = new List<RaycastResult>();
        EventSystem.current.RaycastAll(pointerEventData, raycastResults);
        foreach(RaycastResult raycastResult in raycastResults)
        {
            if (raycastResult.gameObject.tag == "UI_Interactable")
            {
                _touchInfo.IsInteractableUI = true;
            }
        } 

        
    }

}
