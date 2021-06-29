using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationScript : MonoBehaviour
{
    public Animator animator;
    public GameObject targetSphere;
   

    private bool palmDetected;

    private void Awake()
    {
        animator = GetComponent<Animator>();
    }

    // Start is called before the first frame update
    void Start()
    {
        MeshRenderer meshRenderer = targetSphere.GetComponent<MeshRenderer>();
        meshRenderer.material.SetFloat("_Weight", 0.648f);
        palmDetected = false;
    }

    // Update is called once per frame
    void Update()
    {
        //Debug.Log(palmDetected);
    }

    public void showVisual()
    {
        palmDetected = true;
        animator.SetBool("appear_trigger", palmDetected);
        animator.SetBool("disappear_trigger", !palmDetected);
    }

    public void hideVisuals()
    {
        palmDetected = false;
        animator.SetBool("appear_trigger", palmDetected);
        animator.SetBool("disappear_trigger", !palmDetected);
    }

}
