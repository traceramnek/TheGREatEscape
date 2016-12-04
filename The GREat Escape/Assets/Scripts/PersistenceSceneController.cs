using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

//Any persistence that has to do with serialization was taken from here: 
//http://honkbarkstudios.com/developer-blog/saving-data-in-unity/
public class PersistenceSceneController : MonoBehaviour {
    public GameObject Player;
    public GameObject HealthBar;
    
    public void SavePlayerData() {
        this.SaveToDisc();
    }

    private void SaveToDisc() {
        PlayerPersistantData PlayerData = this.GetPlayerData();
        PersistenceManager.Instance.Save(PlayerData);
    }

    private PlayerPersistantData GetPlayerData()
    {
        PlayerPersistantData PlayerData = new PlayerPersistantData();

        PlayerData.level = SceneManager.GetActiveScene().name;
        PlayerData.posX = Player.transform.position.x;
        PlayerData.posY = Player.transform.position.y;
        PlayerData.health = Player.GetComponent<PlayerController>().health.current;
        PlayerData.booksCollected = Player.GetComponent<PlayerController>().bookNames.ToArray();

        return PlayerData;
    }

    void Start() {
        this.LoadPlayerData();
    }

    private void LoadPlayerData() {
        PlayerPersistantData PlayerData = PersistenceManager.Instance.Load(PlayerPersistantData.NameOfFile) as PlayerPersistantData;
        if(PlayerData != null && SceneManager.GetActiveScene().name == PlayerData.level) {
            //Load the data
            Player.transform.position = new Vector3(PlayerData.posX, PlayerData.posY, Player.transform.position.z);
            HealthBar.GetComponent<HealthBar>().changeBar(50 - (int)PlayerData.health);
            foreach(string name in PlayerData.booksCollected)
            {
                Destroy(GameObject.Find(name));
                Player.GetComponent<PlayerController>().bookNames.Add(name);
            }

            PersistenceManager.Instance.Delete(PlayerPersistantData.NameOfFile);
        }
    }
}
