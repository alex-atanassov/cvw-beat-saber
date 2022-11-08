using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class Slicer : MonoBehaviour
{
    private Vector3 previousPos;
    private Vector3 velocity;

    private XRController xr;

    // Start is called before the first frame update
    void Start()
    {
        xr = transform.parent.parent.GetComponent<XRController>();
    }

    //Update is called once per frame
    void Update()
    {
        velocity = transform.position - previousPos;
        previousPos = transform.position;
    }

    private void OnTriggerEnter(Collider other)
    {
        //Debug.Log("Collided");
        if (gameObject.tag == other.tag)
        {
            float angle = Vector3.Angle(velocity, other.transform.up);
            //float angle = Vector3.Angle(GetComponent<Rigidbody>().velocity, other.transform.up);
            //Debug.Log(angle);
            Debug.Log(velocity);
            if (angle > 130 && velocity.magnitude >= 0.05)
            {
                foreach (Transform child in other.transform.parent.transform)
                {
                    child.tag = "Untagged";
                }

                SplitMesh(other.transform.parent.gameObject);
                Destroy(other.transform.parent.gameObject);
            }
        }
    }

    void SplitMesh(GameObject go)
    {
        // 1.
        GameObject leftHalf = MakeHalf(go, true);
        GameObject rightHalf = MakeHalf(go, false);
        // 2.
        GetComponent<AudioSource>().Play();
        ActivateHaptic();
    }

    GameObject MakeHalf(GameObject go, bool isLeft)
    {
        // 1.
        float sign = isLeft ? -1 : 1;
        GameObject half = Instantiate(go);
        MeshFilter filter = half.GetComponent<MeshFilter>();

        // 2.
        Plane cuttingPlane = GetPlane(go);

        foreach (Transform child in half.transform)
        {
            if (child.GetComponent<MeshFilter>() != null)
            {
                //CloneMesh(cuttingPlane, child.GetComponent<MeshFilter>().mesh, isLeft);
                Destroy(child.gameObject);
            }
        }

        filter.mesh = CloneMesh(cuttingPlane, filter.mesh, isLeft);

        // 3.
        half.transform.position = go.transform.position + transform.rotation * new Vector3(sign * 0.05f, 0, 0);
        half.GetComponent<Rigidbody>().isKinematic = false;
        half.GetComponent<Rigidbody>().useGravity = true;

        // My addition: gives some force to separate the two halves while falling
        half.GetComponent<Rigidbody>().AddForce(cuttingPlane.normal * 5 * sign, ForceMode.Impulse);

        // 4.
        half.GetComponent<Collider>().isTrigger = false;
        Destroy(half, 2);

        return half;
    }

    private Plane GetPlane(GameObject go)
    {
        // 1.
        Vector3 pt1 = transform.rotation * new Vector3(0, 0, 0);
        Vector3 pt2 = transform.rotation * new Vector3(0, 1, 0);
        Vector3 pt3 = transform.rotation * new Vector3(0, 0, 1);

        // 2.
        Plane rv = new Plane();
        rv.Set3Points(pt1, pt2, pt3);
        return rv;
    }

    private Mesh CloneMesh(Plane p, Mesh oMesh, bool halve)
    {
        // 1.
        Mesh cMesh = new Mesh();
        cMesh.name = "slicedMesh";
        Vector3[] vertices = oMesh.vertices;
        for (int i = 0; i < vertices.Length; i++)
        {
            bool side = p.GetSide(vertices[i]);

            if (side == halve)
            {
                vertices[i] = p.ClosestPointOnPlane(vertices[i]);
            }
        }

        // 2.
        cMesh.vertices = vertices;
        cMesh.triangles = oMesh.triangles;
        cMesh.normals = oMesh.normals;
        cMesh.uv = oMesh.uv;
        return cMesh;
    }


    void ActivateHaptic()
    {
        if(xr != null)
        {
            xr.SendHapticImpulse(0.5f, 0.15f);
        }
    }

}
