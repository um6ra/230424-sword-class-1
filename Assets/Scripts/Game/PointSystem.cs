using UnityEngine;

public class PointSystem : MonoBehaviour
{
    #region Singleton 
    public static PointSystem Instance { get; private set; }

    void Awake()
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

    #region Score Properties
    private int score; // Track the player's score
    #endregion

    #region Scoring Methods
    public void AddPointsForFruitSlashed()
    {
        score += 10;  // hardcoded
        UpdateScoreDisplay();
    }

    public void AddPointsForSpecialAction(int points)
    {
        score += points;  // ez
        UpdateScoreDisplay();
    }
    #endregion

    #region Score Update UI
    private void UpdateScoreDisplay()
    {
        UIManager.Instance.UpdateScore(score);
    }
    #endregion

    #region Utility Methods
    public void ResetScore()
    {
        score = 0;
        UpdateScoreDisplay();
        Debug.Log("Score has been reset.");
    }
    #endregion
}
