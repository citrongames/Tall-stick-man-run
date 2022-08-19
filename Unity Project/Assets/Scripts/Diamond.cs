using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Diamond : MonoBehaviour
{
    [SerializeField] private int _collectCount;
    [SerializeField] private GameData _gameData;
    [SerializeField] private TextMeshProUGUI _tmpText;

    private ParticleSystem _particle;
    private MeshRenderer _model;

    private void Start() 
    {
        _particle = GetComponentInChildren<ParticleSystem>();
        _model = GetComponentInChildren<MeshRenderer>();
        _tmpText = GameObject.Find("TXTDiamonds").GetComponent<TextMeshProUGUI>();
    }
    public void Collect()
    {
        _gameData.Diamonds += _collectCount;
        _tmpText.text = _gameData.Diamonds.ToString();
        _model.gameObject.SetActive(false);
        _particle.Play();
        Invoke("DestroyOnParticleStop", _particle.main.duration);
    }

    private void DestroyOnParticleStop()
    {
        Destroy(gameObject);
    }
}
