using UnityEngine;

public class Player : MonoBehaviour
{
    #region Player Properties
    public int health = 100;
    public int maxHealth = 100;
    public int mana = 50;
    public int maxMana = 50;
    public int score = 0;
    #endregion

    #region Unity Lifecycle Methods
    void Start()
    {
        InitializePlayer();
    }

    void Update()
    {
        UpdateGameStatus();
    }
    #endregion

    #region Initialization
    private void InitializePlayer()
    {
        health = maxHealth;
        mana = maxMana;
        score = 0;
        Debug.Log("Player initialized with full health and mana.");
    }
    #endregion

    #region Game Status Updates
    private void UpdateGameStatus()
    {
        // Update HUD or other game status dynamically
    }
    #endregion

    #region Player Interaction Methods
    public void TakeDamage(int damage)
    {
        health -= damage;
        UpdateHealthUI();
        if (health <= 0)
        {
            health = 0;
            OnPlayerDeath();
        }
    }

    public void UseMana(int amount)
    {
        if (mana >= amount)
        {
            mana -= amount;
            Debug.Log("Mana used. Current mana: " + mana);
        }
        else
            Debug.Log("Not enough mana.");
    }


    private void OnPlayerDeath()
    {
        Debug.Log("Player has died.");
        GameManager.Instance.OnPlayerDeath();
        // Additional death logic (e.g., play death animation, sound)
    }

    public void Respawn()
    {
        health = maxHealth;
        mana = maxMana;
        UpdateHealthUI();
        // Additional respawn logic (e.g., reset position, status effects)
    }
    #endregion

    #region UI
    private void UpdateHealthUI()
    {
        UIManager.Instance.UpdateHealth(health, maxHealth);
    }
    #endregion
}
