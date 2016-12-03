using UnityEngine;
using System;

[Serializable]
public class PlayerPersistantData : IPersistence
{
    public string level;
    public float posX;
    public float posY;
    public float health;
    public string[] booksCollected;
    public const string NameOfFile = "player.dat";
    public string FileName
    {
        get
        {
            return NameOfFile;
        }
    }
}
