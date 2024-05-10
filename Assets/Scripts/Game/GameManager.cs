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
        Destroy(gameObject);
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
        gameState = GameState.Playing; // start playing
    }

    public void PauseGame()
    {
        gameState = GameState.Paused;
        Time.timeScale = 0; // Stop 
    }

    public void ResumeGame()
    {
        gameState = GameState.Playing;
        Time.timeScale = 1; // Resume 
    }

    public void GameOver()
    {
        gameState = GameState.GameOver;
        Time.timeScale = 0; // Stop
        Debug.Log("Game Over!");
        // game over screen or menu 
    }

    private void UpdateGameplay()
    {
        // Add gameplay update logic here
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
            GameOver();
        else
            Debug.Log("Lives left: " + lives);
            // respawn? what happens when we lose a life and still have lives left?
    }
    #endregion

}
