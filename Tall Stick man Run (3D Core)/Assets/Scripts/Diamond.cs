using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Diamond : MonoBehaviour
{
    [SerializeField] private int _collectCount;
    [SerializeField] private GameData _gameData;
    [SerializeField] private TextMeshProUGUI _tmpText;
    public void Collect()
    {
        _gameData.Diamonds += _collectCount;
        _tmpText.text = _gameData.Diamonds.ToString();
        Destroy(gameObject);
    }
}
