using UnityEngine;

public class LowPassFilter
{
    private float alpha; // Smoothing factor
    private Vector3 prevValue;

    public LowPassFilter(float alpha = 0.8f)
    {
        this.alpha = alpha;
        this.prevValue = Vector3.zero;
    }

    public Vector3 Filter(Vector3 input)
    {
        Vector3 filteredValue = alpha * input + (1 - alpha) * prevValue;
        prevValue = filteredValue;
        return filteredValue;
    }

    public void Reset(Vector3 initialValue)
    {
        prevValue = initialValue;
    }
}