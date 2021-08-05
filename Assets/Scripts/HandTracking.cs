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

    public float threshold = 0.1f;
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
        threshold = eventData.NewValue * scale;
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
    


        /*
        foreach (var gesture in gestures)
        {
       
            //Check each Gesture
            if (thumbCurl <= transform.Find(gesture.name).GetComponent<HandGestureCurlValues>().thumbCurlIndex + threshold && thumbCurl >= transform.Find(gesture.name).GetComponent<HandGestureCurlValues>().thumbCurlIndex - threshold &&
            indexCurl <= transform.Find(gesture.name).GetComponent<HandGestureCurlValues>().indexCurlIndex + threshold && indexCurl >= transform.Find(gesture.name).GetComponent<HandGestureCurlValues>().indexCurlIndex - threshold &&
            middleCurl <= transform.Find(gesture.name).GetComponent<HandGestureCurlValues>().middleCurlIndex + threshold && middleCurl >= transform.Find(gesture.name).GetComponent<HandGestureCurlValues>().middleCurlIndex - threshold &&
            ringCurl <= transform.Find(gesture.name).GetComponent<HandGestureCurlValues>().ringCurlIndex + threshold && ringCurl >= transform.Find(gesture.name).GetComponent<HandGestureCurlValues>().ringCurlIndex - threshold &&
            pinkyCurl <= transform.Find(gesture.name).GetComponent<HandGestureCurlValues>().pinkyCurlIndex + threshold && pinkyCurl >= transform.Find(gesture.name).GetComponent<HandGestureCurlValues>().pinkyCurlIndex - threshold)
            {
                return gesture;
            }
            else { return gestures[gestures.Count - 1]; }
        }

        return gestures[gestures.Count - 1];

        /*
        //Fist Gesture
        if (thumbCurl <= transform.Find("Fist_Gesture").GetComponent<HandGestureCurlValues>().thumbCurlIndex + threshold && thumbCurl >= transform.Find("Fist_Gesture").GetComponent<HandGestureCurlValues>().thumbCurlIndex - threshold &&
            indexCurl <= transform.Find("Fist_Gesture").GetComponent<HandGestureCurlValues>().indexCurlIndex + threshold && indexCurl >= transform.Find("Fist_Gesture").GetComponent<HandGestureCurlValues>().indexCurlIndex - threshold &&
            middleCurl <= transform.Find("Fist_Gesture").GetComponent<HandGestureCurlValues>().middleCurlIndex + threshold && middleCurl >= transform.Find("Fist_Gesture").GetComponent<HandGestureCurlValues>().middleCurlIndex - threshold &&
            ringCurl <= transform.Find("Fist_Gesture").GetComponent<HandGestureCurlValues>().ringCurlIndex + threshold && ringCurl >= transform.Find("Fist_Gesture").GetComponent<HandGestureCurlValues>().ringCurlIndex - threshold &&
            pinkyCurl <= transform.Find("Fist_Gesture").GetComponent<HandGestureCurlValues>().pinkyCurlIndex + threshold && pinkyCurl >= transform.Find("Fist_Gesture").GetComponent<HandGestureCurlValues>().pinkyCurlIndex - threshold)
        {
            return gestures[0];
        }

        //Flat Palm Gesture
        if (thumbCurl <= transform.Find("Flat_Palm").GetComponent<HandGestureCurlValues>().thumbCurlIndex + threshold && thumbCurl >= transform.Find("Flat_Palm").GetComponent<HandGestureCurlValues>().thumbCurlIndex - threshold &&
            indexCurl <= transform.Find("Flat_Palm").GetComponent<HandGestureCurlValues>().indexCurlIndex + threshold && indexCurl >= transform.Find("Flat_Palm").GetComponent<HandGestureCurlValues>().indexCurlIndex - threshold &&
            middleCurl <= transform.Find("Flat_Palm").GetComponent<HandGestureCurlValues>().middleCurlIndex + threshold && middleCurl >= transform.Find("Flat_Palm").GetComponent<HandGestureCurlValues>().middleCurlIndex - threshold &&
            ringCurl <= transform.Find("Flat_Palm").GetComponent<HandGestureCurlValues>().ringCurlIndex + threshold && ringCurl >= transform.Find("Flat_Palm").GetComponent<HandGestureCurlValues>().ringCurlIndex - threshold &&
            pinkyCurl <= transform.Find("Flat_Palm").GetComponent<HandGestureCurlValues>().pinkyCurlIndex + threshold && pinkyCurl >= transform.Find("Flat_Palm").GetComponent<HandGestureCurlValues>().pinkyCurlIndex - threshold)
        {
            return gestures[1];
        }

        //Thumbs Up
        else if (thumbCurl <= transform.Find("Thumbs_Up").GetComponent<HandGestureCurlValues>().thumbCurlIndex + threshold && thumbCurl >= transform.Find("Thumbs_Up").GetComponent<HandGestureCurlValues>().thumbCurlIndex - threshold &&
            indexCurl <= transform.Find("Thumbs_Up").GetComponent<HandGestureCurlValues>().indexCurlIndex + threshold && indexCurl >= transform.Find("Thumbs_Up").GetComponent<HandGestureCurlValues>().indexCurlIndex - threshold &&
            middleCurl <= transform.Find("Thumbs_Up").GetComponent<HandGestureCurlValues>().middleCurlIndex + threshold && middleCurl >= transform.Find("Thumbs_Up").GetComponent<HandGestureCurlValues>().middleCurlIndex - threshold &&
            ringCurl <= transform.Find("Thumbs_Up").GetComponent<HandGestureCurlValues>().ringCurlIndex + threshold && ringCurl >= transform.Find("Thumbs_Up").GetComponent<HandGestureCurlValues>().ringCurlIndex - threshold &&
            pinkyCurl <= transform.Find("Thumbs_Up").GetComponent<HandGestureCurlValues>().pinkyCurlIndex + threshold && pinkyCurl >= transform.Find("Thumbs_Up").GetComponent<HandGestureCurlValues>().pinkyCurlIndex - threshold)
        {
            return gestures[2];
        }

        //Pointer 
        else if (thumbCurl <= transform.Find("Pointer").GetComponent<HandGestureCurlValues>().thumbCurlIndex + threshold && thumbCurl >= transform.Find("Pointer").GetComponent<HandGestureCurlValues>().thumbCurlIndex - threshold &&
            indexCurl <= transform.Find("Pointer").GetComponent<HandGestureCurlValues>().indexCurlIndex + threshold && indexCurl >= transform.Find("Pointer").GetComponent<HandGestureCurlValues>().indexCurlIndex - threshold &&
            middleCurl <= transform.Find("Pointer").GetComponent<HandGestureCurlValues>().middleCurlIndex + threshold && middleCurl >= transform.Find("Pointer").GetComponent<HandGestureCurlValues>().middleCurlIndex - threshold &&
            ringCurl <= transform.Find("Pointer").GetComponent<HandGestureCurlValues>().ringCurlIndex + threshold && ringCurl >= transform.Find("Pointer").GetComponent<HandGestureCurlValues>().ringCurlIndex - threshold &&
            pinkyCurl <= transform.Find("Pointer").GetComponent<HandGestureCurlValues>().pinkyCurlIndex + threshold && pinkyCurl >= transform.Find("Pointer").GetComponent<HandGestureCurlValues>().pinkyCurlIndex - threshold)
        {
            return gestures[3];
        }

        //Two Pointer  
        else if (thumbCurl <= transform.Find("TwoFinger_Pointer").GetComponent<HandGestureCurlValues>().thumbCurlIndex + threshold && thumbCurl >= transform.Find("TwoFinger_Pointer").GetComponent<HandGestureCurlValues>().thumbCurlIndex - threshold &&
            indexCurl <= transform.Find("TwoFinger_Pointer").GetComponent<HandGestureCurlValues>().indexCurlIndex + threshold && indexCurl >= transform.Find("TwoFinger_Pointer").GetComponent<HandGestureCurlValues>().indexCurlIndex - threshold &&
            middleCurl <= transform.Find("TwoFinger_Pointer").GetComponent<HandGestureCurlValues>().middleCurlIndex + threshold && middleCurl >= transform.Find("TwoFinger_Pointer").GetComponent<HandGestureCurlValues>().middleCurlIndex - threshold &&
            ringCurl <= transform.Find("TwoFinger_Pointer").GetComponent<HandGestureCurlValues>().ringCurlIndex + threshold && ringCurl >= transform.Find("TwoFinger_Pointer").GetComponent<HandGestureCurlValues>().ringCurlIndex - threshold &&
            pinkyCurl <= transform.Find("TwoFinger_Pointer").GetComponent<HandGestureCurlValues>().pinkyCurlIndex + threshold && pinkyCurl >= transform.Find("TwoFinger_Pointer").GetComponent<HandGestureCurlValues>().pinkyCurlIndex - threshold)
        {
            return gestures[4];
        }

        //Hang Loose Gesture
        else if (thumbCurl <= transform.Find("HangLoose").GetComponent<HandGestureCurlValues>().thumbCurlIndex + threshold && thumbCurl >= transform.Find("HangLoose").GetComponent<HandGestureCurlValues>().thumbCurlIndex - threshold &&
            indexCurl <= transform.Find("HangLoose").GetComponent<HandGestureCurlValues>().indexCurlIndex + threshold && indexCurl >= transform.Find("HangLoose").GetComponent<HandGestureCurlValues>().indexCurlIndex - threshold &&
            middleCurl <= transform.Find("HangLoose").GetComponent<HandGestureCurlValues>().middleCurlIndex + threshold && middleCurl >= transform.Find("HangLoose").GetComponent<HandGestureCurlValues>().middleCurlIndex - threshold &&
            ringCurl <= transform.Find("HangLoose").GetComponent<HandGestureCurlValues>().ringCurlIndex + threshold && ringCurl >= transform.Find("HangLoose").GetComponent<HandGestureCurlValues>().ringCurlIndex - threshold &&
            pinkyCurl <= transform.Find("HangLoose").GetComponent<HandGestureCurlValues>().pinkyCurlIndex + threshold && pinkyCurl >= transform.Find("HangLoose").GetComponent<HandGestureCurlValues>().pinkyCurlIndex - threshold)
        {
            return gestures[5];
        }

        //SpiderMan Gesture
        else if (thumbCurl <= transform.Find("SpiderMan").GetComponent<HandGestureCurlValues>().thumbCurlIndex + threshold && thumbCurl >= transform.Find("SpiderMan").GetComponent<HandGestureCurlValues>().thumbCurlIndex - threshold &&
            indexCurl <= transform.Find("SpiderMan").GetComponent<HandGestureCurlValues>().indexCurlIndex + threshold && indexCurl >= transform.Find("SpiderMan").GetComponent<HandGestureCurlValues>().indexCurlIndex - threshold &&
            middleCurl <= transform.Find("SpiderMan").GetComponent<HandGestureCurlValues>().middleCurlIndex + threshold && middleCurl >= transform.Find("SpiderMan").GetComponent<HandGestureCurlValues>().middleCurlIndex - threshold &&
            ringCurl <= transform.Find("SpiderMan").GetComponent<HandGestureCurlValues>().ringCurlIndex + threshold && ringCurl >= transform.Find("SpiderMan").GetComponent<HandGestureCurlValues>().ringCurlIndex - threshold &&
            pinkyCurl <= transform.Find("SpiderMan").GetComponent<HandGestureCurlValues>().pinkyCurlIndex + threshold && pinkyCurl >= transform.Find("SpiderMan").GetComponent<HandGestureCurlValues>().pinkyCurlIndex - threshold)
        {
            return gestures[5];
        }

        //Unity Open Hands Gesture
        else if (thumbCurl <= transform.Find("Unity_Open_Hands").GetComponent<HandGestureCurlValues>().thumbCurlIndex + threshold && thumbCurl >= transform.Find("Unity_Open_Hands").GetComponent<HandGestureCurlValues>().thumbCurlIndex - threshold &&
            indexCurl <= transform.Find("Unity_Open_Hands").GetComponent<HandGestureCurlValues>().indexCurlIndex + threshold && indexCurl >= transform.Find("Unity_Open_Hands").GetComponent<HandGestureCurlValues>().indexCurlIndex - threshold &&
            middleCurl <= transform.Find("Unity_Open_Hands").GetComponent<HandGestureCurlValues>().middleCurlIndex + threshold && middleCurl >= transform.Find("Unity_Open_Hands").GetComponent<HandGestureCurlValues>().middleCurlIndex - threshold &&
            ringCurl <= transform.Find("Unity_Open_Hands").GetComponent<HandGestureCurlValues>().ringCurlIndex + threshold && ringCurl >= transform.Find("Unity_Open_Hands").GetComponent<HandGestureCurlValues>().ringCurlIndex - threshold &&
            pinkyCurl <= transform.Find("Unity_Open_Hands").GetComponent<HandGestureCurlValues>().pinkyCurlIndex + threshold && pinkyCurl >= transform.Find("Unity_Open_Hands").GetComponent<HandGestureCurlValues>().pinkyCurlIndex - threshold)
        {
            return gestures[8];
        }

        //Unity Airtap Gesture
        else if (thumbCurl <= transform.Find("Unity_Airtap").GetComponent<HandGestureCurlValues>().thumbCurlIndex + threshold && thumbCurl >= transform.Find("Unity_Airtap").GetComponent<HandGestureCurlValues>().thumbCurlIndex - threshold &&
            indexCurl <= transform.Find("Unity_Airtap").GetComponent<HandGestureCurlValues>().indexCurlIndex + threshold && indexCurl >= transform.Find("Unity_Airtap").GetComponent<HandGestureCurlValues>().indexCurlIndex - threshold &&
            middleCurl <= transform.Find("Unity_Airtap").GetComponent<HandGestureCurlValues>().middleCurlIndex + threshold && middleCurl >= transform.Find("Unity_Airtap").GetComponent<HandGestureCurlValues>().middleCurlIndex - threshold &&
            ringCurl <= transform.Find("Unity_Airtap").GetComponent<HandGestureCurlValues>().ringCurlIndex + threshold && ringCurl >= transform.Find("Unity_Airtap").GetComponent<HandGestureCurlValues>().ringCurlIndex - threshold &&
            pinkyCurl <= transform.Find("Unity_Airtap").GetComponent<HandGestureCurlValues>().pinkyCurlIndex + threshold && pinkyCurl >= transform.Find("Unity_Airtap").GetComponent<HandGestureCurlValues>().pinkyCurlIndex - threshold)
        {
            return gestures[9];
        }

        else { return gestures[gestures.Count - 1]; }
        */
        
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
