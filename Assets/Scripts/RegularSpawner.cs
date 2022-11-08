using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RegularSpawner : MonoBehaviour
{
    public GameObject gameObject;
    public float timeInterval = 60f / 105f;

    public float spawnProbability = 0.5f;

    // Start is called before the first frame update
    void Start()
    {
        InvokeRepeating("Spawn", 0, timeInterval);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void Spawn()
    {
        if(Random.Range(0f, 1f) < spawnProbability)
            Instantiate(gameObject, transform);
    }
}
