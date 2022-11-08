using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomSpawner : MonoBehaviour
{
    public float timeInterval = 60f / 105f;

    public float spawnProbability = 0.8f;

    public GameObject[] cubes;
    public Transform[] points;

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
        if (Random.Range(0f, 1f) < spawnProbability)
        {
            GameObject cube = Instantiate(cubes[Random.Range(0, 4)], points[Random.Range(0, 4)]);
            cube.transform.localPosition = Vector3.zero;
            cube.transform.Rotate(transform.forward, 90 * Random.Range(0, 4));
        }
    }
}