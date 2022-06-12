using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Loader : MonoBehaviour
{
    [SerializeField] private int _levelIndex;

    void Start()
    {
        Application.targetFrameRate = Screen.currentResolution.refreshRate;
        //Application.targetFrameRate = 60;
        if (_levelIndex > 0)
            StartCoroutine(LoadLevel(_levelIndex));
    }

    IEnumerator LoadLevel(int levelIndex)
    {
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(levelIndex);

        while (asyncLoad.isDone)
        {
            yield return null;
        }
    }
}
