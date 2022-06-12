using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NewTypes;

[CreateAssetMenu(fileName = "GameData", menuName = "ScriptableObjects/GameData", order = 2)]
public class GameData : ScriptableObject
{
    [SerializeField] private int _diamonds;
    public int Diamonds 
    {
        get => _diamonds;
        set => _diamonds = value;
    }
    private int _levelNum;
    private int _playerMaterial;
    private int _playerHat;
    private int _soundSetting;
    private int _vibrationSetting;
}
