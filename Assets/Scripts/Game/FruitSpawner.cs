using UnityEngine;

public class FruitSpawner : MonoBehaviour
{
    public GameObject fruitPrefab;
    public float spawnInterval = 2f;
    private float timer = 0f;

    void Update()
    {
        timer += Time.deltaTime;
        if (timer >= spawnInterval)
        {
            SpawnFruit();
            timer = 0f;
        }
    }

    void SpawnFruit()
    {
        Vector3 spawnPosition = new Vector3(Random.Range(-1f, 1f), Random.Range(-1f, 1f), Random.Range(-1f, 1f));
        Instantiate(fruitPrefab, spawnPosition, Quaternion.identity);
    }
}
