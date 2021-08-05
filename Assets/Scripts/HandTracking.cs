using System;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

using Microsoft;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;


[Serializable]
public struct Gesture
{
    public string name;
    public List<float> fingerCurls;
}


public class HandTracking : MonoBehaviour
{
    
    public GameObject visualMarker;
    public GameObject SuccessSphere;
    public TMP_Text curlValues;

    public List<Gesture> gestures;
    private Gesture previousGesture;

    GameObject thumbObject;
    GameObject indexObject;
    GameObject middleObject;
    GameObject ringObject;
    GameObject pinkyObject;
    GameObject wristObject;

    private Vector3 thumbPose;
    private Vector3 indexPose;
    private Vector3 middlePose;
    private Vector3 ringPose;
    private Vector3 pinkyPose;
    private Vector3 wristPose;

    [Range(0.0f,  1.0f)]
    public float IndexCurlThreshold = 0.025f;
    [Range(0.0f, 1.0f)]
    public float MiddleCurlThreshold = 0.025f;
    [Range(0.0f, 1.0f)]
    public float RingCurlThreshold = 0.6f;
    [Range(0.0f, 1.0f)]
    public float PinkyCurlThreshold = 0.7f;
    [Range(0.0f, 1.0f)]
    public float ThumbCurlThreshold = 0.7f;

    public float threshold;
    public float scale = 0.1f;

    MixedRealityPose pose;

    // Start is called before the first frame update
    void Start()
    {
        previousGesture = new Gesture();

        SuccessSphere.SetActive(false);

;       thumbObject = Instantiate(visualMarker, this.transform);
        indexObject = Instantiate(visualMarker, this.transform);
        middleObject = Instantiate(visualMarker, this.transform);
        wristObject = Instantiate(visualMarker, this.transform);
        ringObject = Instantiate(visualMarker, this.transform);
        pinkyObject = Instantiate(visualMarker, this.transform);
    }

    // Update is called once per frame
    void Update()
    {
        thumbObject.GetComponent<Renderer>().enabled = false;
        indexObject.GetComponent<Renderer>().enabled = false;
        middleObject.GetComponent<Renderer>().enabled = false;
        wristObject.GetComponent<Renderer>().enabled = false;
        ringObject.GetComponent<Renderer>().enabled = false;
        pinkyObject.GetComponent<Renderer>().enabled = false;

        thumbPose = Vector3.zero;
        indexPose = Vector3.zero;
        middlePose = Vector3.zero;
        ringPose = Vector3.zero;
        pinkyPose = Vector3.zero;
        wristPose = Vector3.zero;

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.ThumbTip, Handedness.Any, out pose))
        {
            thumbObject.GetComponent<Renderer>().enabled = true;
            thumbObject.transform.position = pose.Position;
            thumbPose = pose.Position;
        }
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Any, out pose))
        {
            indexObject.GetComponent<Renderer>().enabled = true;
            indexObject.transform.position = pose.Position;
            indexPose = pose.Position;
        }
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.MiddleTip, Handedness.Any, out pose))
        {
            middleObject.GetComponent<Renderer>().enabled = true;
            middleObject.transform.position = pose.Position;
            middlePose = pose.Position;
        }
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.RingTip, Handedness.Any, out pose))
        {
            ringObject.GetComponent<Renderer>().enabled = true;
            ringObject.transform.position = pose.Position;
            ringPose = pose.Position;
        }
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.PinkyTip, Handedness.Any, out pose))
        {
            pinkyObject.GetComponent<Renderer>().enabled = true;
            pinkyObject.transform.position = pose.Position;
            pinkyPose = pose.Position;
        }
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.Wrist, Handedness.Any, out pose))
        {
            wristObject.GetComponent<Renderer>().enabled = true;
            wristObject.transform.position = pose.Position;
            wristPose = pose.Position;
        }

        
        Gesture currentGresture = RecognizeGesture();
        bool hasRecognized = !currentGresture.Equals(new Gesture());

        //Check if new gesture
        if (hasRecognized && !currentGresture.Equals(previousGesture) && !currentGresture.Equals(gestures[gestures.Count -1]))
        {
            //New Gesture
            Debug.Log("New Gesture Found: " + currentGresture.name);
            previousGesture = currentGresture;
        }
        
        curlValues.text = "\n" + HandPoseUtils.ThumbFingerCurl(Handedness.Left) + "\n"
                + HandPoseUtils.IndexFingerCurl(Handedness.Left) + "\n"
                + HandPoseUtils.MiddleFingerCurl(Handedness.Left) + "\n"
                + HandPoseUtils.RingFingerCurl(Handedness.Left) + "\n"
                + HandPoseUtils.PinkyFingerCurl(Handedness.Left) + "\n"
                + currentGresture.name;
        

    }

    public void OnSliderUpdateThreshold(SliderEventData eventData)
    {
        threshold = 0.4f * eventData.NewValue + 0.1f;
    } 

    Gesture RecognizeGesture()
    {
        float thumbCurl = HandPoseUtils.ThumbFingerCurl(Handedness.Left);
        float indexCurl = HandPoseUtils.IndexFingerCurl(Handedness.Left);
        float middleCurl = HandPoseUtils.MiddleFingerCurl(Handedness.Left);
        float ringCurl = HandPoseUtils.RingFingerCurl(Handedness.Left);
        float pinkyCurl = HandPoseUtils.PinkyFingerCurl(Handedness.Left);
        float[] currentCurlValues = { thumbCurl, indexCurl, middleCurl, ringCurl, pinkyCurl };

        bool inRange = false;
        for (int i = 0; i < gestures.Count; i++)
        {
            for (int j = 0; j < currentCurlValues.Length; j++)
            {
                if (currentCurlValues[j] <= gestures[i].fingerCurls[j] + threshold && currentCurlValues[j] >= gestures[i].fingerCurls[j] - threshold)
                {
                    inRange = true;
                }
                else 
                {
                    inRange = false;
                    break; 
                }
            }
            
            if(inRange)
            {
                return gestures[i];
            }     
        }

        return gestures[gestures.Count -1];    
    }

    /*
    Gesture RecognizeGesture()
    {
        Gesture currentGesture = new Gesture();

        float thumbCurl = HandPoseUtils.ThumbFingerCurl(Handedness.Left);
        float indexCurl = HandPoseUtils.IndexFingerCurl(Handedness.Left);
        float middleCurl = HandPoseUtils.MiddleFingerCurl(Handedness.Left);
        float ringCurl = HandPoseUtils.RingFingerCurl(Handedness.Left);
        float pinkyCurl = HandPoseUtils.PinkyFingerCurl(Handedness.Left);

        float[] currentCurlValues = { thumbCurl, indexCurl, middleCurl, ringCurl, pinkyCurl };

       

        float currentMin = Mathf.Infinity;

        foreach (var gesture in gestures)
        {
            float sumDistance = 0;
            bool isDiscarded = false;

            for (int i = 0; i < totalFingerJointsTracked; i++)
            {
                float currentData = currentCurlValues[i];
                float distance = ( gesture.fingerCurls[i] - currentData);

                if (distance > threshold)
                {
                    isDiscarded = true;
                    break;
                }

                sumDistance += distance;
            }
            if (!isDiscarded && sumDistance < currentMin)
            {
                currentMin = sumDistance;
                currentGesture = gesture;
            }
        }

        return currentGesture;
    }
    */
}
