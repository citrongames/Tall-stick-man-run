using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using NewTypes;
using TMPro;

public class LevelManager : MonoBehaviour
{
    [SerializeField] private GameData _gameData;
    [SerializeField] private TextMeshProUGUI _tmpText;
    [SerializeField] private List<GameObject> _disableIngame;
    [SerializeField] private List<GameObject> _enableLost;
    [SerializeField] private List<GameObject> _disableLost;
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
        _tmpText.text = _gameData.Diamonds.ToString();
    }

    void Update()
    {
        ReadInput();
        LevelStateManager();
    }

    private void LoadNextLevel()
    {
        int nextLevel = SceneManager.GetActiveScene().buildIndex + 1;
        if (nextLevel > (SceneManager.sceneCountInBuildSettings - 1))
        {
            StartCoroutine(LoadLevel(1));
        }
        else
        {
            StartCoroutine(LoadLevel(nextLevel));
        }        
    }

    private void ReloadLevel()
    {
        StartCoroutine(LoadLevel(SceneManager.GetActiveScene().buildIndex));
    }
    IEnumerator LoadLevel(int levelIndex)
    {
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(levelIndex);

        while (asyncLoad.isDone)
        {
            yield return null;
        }
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
                    _playerAnimator.SetBool("IsRunning", true);
                    
                }
                else if (_touchInfo.Phase == TouchPhase.Ended && !_touchInfo.IsInteractableUI)
                {
                    //idle anim
                    _playerAnimator.SetBool("IsRunning", false);
                }
                else if ((_touchInfo.Phase == TouchPhase.Moved || _touchInfo.Phase == TouchPhase.Stationary) && !_touchInfo.IsInteractableUI)
                {
                    _playerScript.Move(_touchInfo.Direction);
                }
                break;
            case LevelStateEnum.Settings:
                break;
            case LevelStateEnum.Shop:
                break;
            case LevelStateEnum.Lost:
                
                break;
            case LevelStateEnum.Won:
                _playerAnimator.SetBool("IsWon", true);
                break;
        }
    }

    public void ChangeLevelState(LevelStateEnum newLevelState)
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
                if (newLevelState == LevelStateEnum.Won)
                {
                    //LoadNextLevel();
                    Invoke("LoadNextLevel", 2);
                }
                if (newLevelState == LevelStateEnum.Lost)
                {
                    _playerScript.Lost();
                    foreach(GameObject gameObject in _enableLost)
                    {
                        gameObject.SetActive(true);
                    }
                    foreach(GameObject gameObject in _disableLost)
                    {
                        gameObject.SetActive(false);
                    }
                    Invoke("ReloadLevel", 2);
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
        _levelState = newLevelState;
    }

    public void AddDiamonds(int count)
    {
        _gameData.Diamonds += count;
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
        _touchInfo.IsInteractableUI = false;
        switch (touchPhase)
        {
            case TouchPhase.Began:
                _touchInfo.StartPos = Camera.main.ScreenToWorldPoint(new Vector3(touchPos.x, touchPos.y, Camera.main.farClipPlane)).normalized;
                //Debug.Log("Start pos: " + _touchInfo.StartPos);
                _touchInfo.IsInteractableUI = IsInteractable(touchPos);
                break;
            case TouchPhase.Stationary:
            case TouchPhase.Moved:
                _touchInfo.Direction = Camera.main.ScreenToWorldPoint(new Vector3(touchPos.x, touchPos.y, Camera.main.farClipPlane)).normalized - _touchInfo.StartPos;  
                //Debug.Log("Move pos: " + _touchInfo.Direction);    
                _touchInfo.IsInteractableUI = IsInteractable(touchPos);    
                break;
            case TouchPhase.Ended:
                _touchInfo.IsInteractableUI = IsInteractable(touchPos);
                break;
        }
    }

    private bool IsInteractable(Vector3 pos)
    {
        PointerEventData pointerEventData = new PointerEventData(EventSystem.current);
        pointerEventData.position = pos;
        List<RaycastResult> raycastResults = new List<RaycastResult>();
        EventSystem.current.RaycastAll(pointerEventData, raycastResults);
        foreach(RaycastResult raycastResult in raycastResults)
        {
            if (raycastResult.gameObject.tag == "UI_Interactable")
            {
                return true;
            }
        }
        return false; 
    }

}
