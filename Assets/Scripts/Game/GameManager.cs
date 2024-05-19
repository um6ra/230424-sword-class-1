using UnityEngine;

public enum GameState
{
    Initializing,
    Playing,
    Paused,
    GameOver
}

public class GameManager : MonoBehaviour
{
    #region Singleton
    public static GameManager Instance { get; private set; }

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }
    #endregion

    #region Game State Variables
    public GameState gameState;
    public int score;
    public int lives;
    #endregion

    #region Unity Methods
    void Start()
    {
        InitializeGame();
    }

    void Update()
    {
        switch (gameState)
        {
            case GameState.Playing:
                UpdateGameplay();
                break;
            case GameState.Paused:
                // pause-related updates
                break;
            case GameState.GameOver:
                // game over logic
                break;
        }
    }
    #endregion

    #region Game Management Methods
    void InitializeGame()
    {
        lives = 3; // default lives
        score = 0; // reset score
        ChangeState(GameState.Playing); // start playing
    }

    public void PauseGame()
    {
        ChangeState(GameState.Paused);
    }

    public void ResumeGame()
    {
        ChangeState(GameState.Playing);
    }

    public void GameOver()
    {
        ChangeState(GameState.GameOver);
        Debug.Log("Game Over!");
        // game over screen or menu 
    }

    private void UpdateGameplay()
    {
        //todo
    }

    private void ChangeState(GameState newState)
    {
        gameState = newState;
        switch (newState)
        {
            case GameState.Playing:
                Time.timeScale = 1; // Resume
                break;
            case GameState.Paused:
                Time.timeScale = 0; // Stop
                break;
            case GameState.GameOver:
                Time.timeScale = 0; // Stop
                break;
            case GameState.Initializing:
                // Any initialization logic
                break;
        }
        UpdateGameStateUI();
    }
    #endregion

    #region Player Interaction Methods
    public void AddScore(int points)
    {
        score += points;
        Debug.Log("Current Score: " + score);
    }

    public void OnPlayerDeath()
    {
        lives--;
        if (lives <= 0)
        {
            GameOver();
        }
        else
        {
            Debug.Log("Lives left: " + lives);
            // Handle respawn logic if needed
            RespawnPlayer();
        }
    }

    private void RespawnPlayer()
    {
        // Implement respawn logic here
        Debug.Log("Respawning player...");
        // Reset player position, health, etc.
        ChangeState(GameState.Playing); // Resume game after respawn
    }
    #endregion

    #region UI
    public void UpdateGameStateUI()
    {
        switch (gameState)
        {
            case GameState.Playing:
                UIManager.Instance.UpdateGameState("");
                break;
            case GameState.Paused:
                UIManager.Instance.UpdateGameState("Paused");
                break;
            case GameState.GameOver:
                UIManager.Instance.UpdateGameState("Game Over");
                break;
        }
    }
    #endregion
}
