using UnityEngine;
using UnityEngine.UI; // Importing this is crucial for accessing UI components such as the Slider

public class ManaSystem : MonoBehaviour
{
    public Slider manaSlider; // Assign this in the inspector with your UI Slider
    public float maxMana = 100f; // Maximum mana the player can have
    private float currentMana; // Current mana the player has

    // Start is called before the first frame update
    void Start()
    {
        currentMana = maxMana; // Initialize mana
        UpdateManaUI();
    }
    
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Q)) // Assuming Q uses mana
        {
            UseMana(10); // Uses 10 mana
        }

        if(Input.GetKeyDown(KeyCode.E)) // Assuming E restores mana
        {
            RestoreMana(5); // Restores 5 mana
        }
    }
    
    // This method is responsible for reducing the mana
    public void UseMana(float amount)
    {
        currentMana -= amount;
        if(currentMana < 0) currentMana = 0; // Prevent mana from going below 0
        UpdateManaUI();
        GetComponent<SerialComm>().UpdateMana(currentMana);

        // Here you could add what happens if mana is depleted, but for now, we just update the UI.
    }

    // This method is responsible for restoring mana
    public void RestoreMana(float amount)
    {
        currentMana += amount;
        if(currentMana > maxMana) currentMana = maxMana; // Prevent mana from exceeding max value
        UpdateManaUI();
        GetComponent<SerialComm>().UpdateMana(currentMana);
    }

    // Updates the mana bar UI to reflect the current state of the mana
    private void UpdateManaUI()
    {
        manaSlider.value = currentMana / maxMana;
    }
}