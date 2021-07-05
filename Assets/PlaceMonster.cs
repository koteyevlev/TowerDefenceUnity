using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class PlaceMonster : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject monsterPrefab;
    private GameObject monster;
    private GameManagerBehaviour gameManager;
    void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManagerBehaviour>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    
    private bool CanUpgradeMonster()
    {
        if (monster != null)
        {
            MonsterData monsterData = monster.GetComponent<MonsterData>();
            MonsterLevel nextLevel = monsterData.GetNextLevel();
            if (nextLevel != null)
            {
                return gameManager.Gold >= nextLevel.cost;
            }
        }
        return false;
    }
    private bool CanPlaceMonster()
    {
        int cost = monsterPrefab.GetComponent<MonsterData>().levels[0].cost;
        return monster == null && gameManager.Gold >= cost;
    }
    
    //1
    void OnMouseUp()
    {
        //2
        if (CanPlaceMonster())
        {
            //3
            monster = (GameObject) 
                Instantiate(monsterPrefab, transform.position, Quaternion.identity);
            //4
            AudioSource audioSource = gameObject.GetComponent<AudioSource>();
            audioSource.PlayOneShot(audioSource.clip);

            // TODO: вычитать золото
            gameManager.Gold -= monster.GetComponent<MonsterData>().CurrentLevel.cost;
        }
        else if (CanUpgradeMonster())
        {
            monster.GetComponent<MonsterData>().IncreaseLevel();
            AudioSource audioSource = gameObject.GetComponent<AudioSource>();
            audioSource.PlayOneShot(audioSource.clip);
            // TODO: вычитать золото
            gameManager.Gold -= monster.GetComponent<MonsterData>().CurrentLevel.cost;
        }
    }
}
