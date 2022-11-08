using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeMovement : MonoBehaviour
{
    public float speed = 1.0f;
    //public GameObject quickMessage;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Move();
        DespawnIfMissed();
    }

    //private void OnTriggerEnter(Collider other)
    //{
    //    //Debug.Log("Trigger");
    //    if(gameObject.tag == other.tag)
    //        other.gameObject.GetComponent<Slicer>().
    //}

    private void Move()
    {
        Vector3 currentPosition = transform.position;

        currentPosition.z -= speed * Time.deltaTime;

        //GetComponent<Rigidbody>().MovePosition(currentPosition - Vector3.forward * Time.deltaTime * speed);

        transform.position = currentPosition;
    }

    private void DespawnIfMissed()
    {
        if (transform.position.z < -7f)
        {
            //// 1. Create a message
            //GameObject textMessage = Instantiate(quickMessage);
            ////textMessage.transform.position = gameObject.transform.position;
            //textMessage.transform.position = new Vector3(0,1,0);

            //// 2. Destroy the missed object
            Destroy(gameObject);
        }
    }
}
