using System;
using System.IO;
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
    public TMP_Text letter;

    public GameObject[] myName;

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

    public float threshold;
    public int counterAlphabet = -1;
    private string alphbet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    MixedRealityPose pose;

    Vector3 _prevPosition;

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

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.ThumbTip, Handedness.Right, out pose))
        {
            thumbObject.GetComponent<Renderer>().enabled = true;
            thumbObject.transform.position = pose.Position;
            thumbPose = pose.Position;
        }
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Right, out pose))
        {
            indexObject.GetComponent<Renderer>().enabled = true;
            indexObject.transform.position = pose.Position;
            indexPose = pose.Position;
        }
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.MiddleTip, Handedness.Right, out pose))
        {
            middleObject.GetComponent<Renderer>().enabled = true;
            middleObject.transform.position = pose.Position;
            middlePose = pose.Position;
        }
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.RingTip, Handedness.Right, out pose))
        {
            ringObject.GetComponent<Renderer>().enabled = true;
            ringObject.transform.position = pose.Position;
            ringPose = pose.Position;
        }
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.PinkyTip, Handedness.Right, out pose))
        {
            pinkyObject.GetComponent<Renderer>().enabled = true;
            pinkyObject.transform.position = pose.Position;
            pinkyPose = pose.Position;
        }
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.Wrist, Handedness.Right, out pose))
        {
            wristObject.GetComponent<Renderer>().enabled = true;
            wristObject.transform.position = pose.Position;
            wristPose = pose.Position;

            Vector3 vel = (wristPose - _prevPosition) / Time.deltaTime;
            _prevPosition = wristPose;
            letter.text = _prevPosition.ToString();

        }

        Gesture currentGresture = RecognizeGesture();
        bool hasRecognized = !currentGresture.Equals(new Gesture());

        //SpwanLetters(currentGresture);

        //Check if new gesture
        if (hasRecognized && !currentGresture.Equals(previousGesture) && !currentGresture.Equals(gestures[gestures.Count -1]))
        {
            //New Gesture
            //Debug.Log("New Gesture Found: " + currentGresture.name);
            previousGesture = currentGresture;
        }
        
        
        curlValues.text = "\n" + HandPoseUtils.ThumbFingerCurl(Handedness.Right) + "\n"
                + HandPoseUtils.IndexFingerCurl(Handedness.Right) + "\n"
                + HandPoseUtils.MiddleFingerCurl(Handedness.Right) + "\n"
                + HandPoseUtils.RingFingerCurl(Handedness.Right) + "\n"
                + HandPoseUtils.PinkyFingerCurl(Handedness.Right) + "\n"
                + currentGresture.name;

        //letter.text = currentGresture.name;


    }

    bool A_check = true;
    bool N_check = true;
    bool D_check = true;
    bool R_check = true;
    bool E_check = true;

    static void DestroyGameObject(GameObject obj, float t = 5f)
    {
        Destroy(obj, t);
    }

    public void SpwanLetters(Gesture selectedLetter)
    {
        string name = selectedLetter.name;

        if (name == "A" && A_check)
        {
            A_check = false;

            N_check = true;
            D_check = true;
            R_check = true;
            E_check = true;
            if (HandJointUtils.TryGetJointPose(TrackedHandJoint.Palm, Handedness.Right, out pose))
            {
                Vector3 vector = new Vector3(0, -180, -180);
                Instantiate(myName[0], pose.Position, Quaternion.LookRotation(vector));
            }
          
            GameObject go = GameObject.Find(name + "(Clone)");
            DestroyGameObject(go);
        }
        if (name == "N" && N_check)

        {
            A_check = true;
            N_check = false;
            D_check = true;
            R_check = true;
            E_check = true;
            if (HandJointUtils.TryGetJointPose(TrackedHandJoint.Palm, Handedness.Right, out pose))
            {
                Vector3 vector = new Vector3(0, -180, -180);
                Instantiate(myName[1], pose.Position, Quaternion.LookRotation(vector));
            }

            GameObject go = GameObject.Find(name + "(Clone)");
            DestroyGameObject(go);
        }
        if (name == "D" && D_check)
        {
            D_check = false;
            A_check = true;
            N_check = true;
            R_check = true;
            E_check = true;
            if (HandJointUtils.TryGetJointPose(TrackedHandJoint.Palm, Handedness.Right, out pose))
            {
                Vector3 vector = new Vector3(0, -180, -180);
                Instantiate(myName[2], pose.Position, Quaternion.LookRotation(vector));
            }

            GameObject go = GameObject.Find(name + "(Clone)");
            DestroyGameObject(go);
        }

        if (name == "R" && R_check)
        {
            R_check = false;
            D_check = true;
            A_check = true;
            N_check = true;
            E_check = true;
            if (HandJointUtils.TryGetJointPose(TrackedHandJoint.Palm, Handedness.Right, out pose))
            {
                Vector3 vector = new Vector3(0, -180, -180);
                Instantiate(myName[3], pose.Position, Quaternion.LookRotation(vector));
            }

            GameObject go = GameObject.Find(name + "(Clone)");
            DestroyGameObject(go);
        }

        if (name == "E" && E_check)
        {
            E_check = false;
            R_check = true;
            D_check = true;
            A_check = true;
            N_check = true;
            if (HandJointUtils.TryGetJointPose(TrackedHandJoint.Palm, Handedness.Right, out pose))
            {
                Vector3 vector = new Vector3(0, -180, -180);
                Instantiate(myName[4], pose.Position, Quaternion.LookRotation(vector));
            }

            GameObject go = GameObject.Find(name + "(Clone)");
            DestroyGameObject(go);
        }
    }

    public void OnSliderUpdateThreshold(SliderEventData eventData)
    {
        threshold = 0.4f * eventData.NewValue + 0.1f;
    } 

    public void SaveGesture()
    {

        Gesture g = new Gesture();
        List<float> fingerData = new List<float>();
        g.name = alphbet[counterAlphabet].ToString();

        float thumbCurl = HandPoseUtils.ThumbFingerCurl(Handedness.Right);
        float indexCurl = HandPoseUtils.IndexFingerCurl(Handedness.Right);
        float middleCurl = HandPoseUtils.MiddleFingerCurl(Handedness.Right);
        float ringCurl = HandPoseUtils.RingFingerCurl(Handedness.Right);
        float pinkyCurl = HandPoseUtils.PinkyFingerCurl(Handedness.Right);
        float[] currentCurlValues = { thumbCurl, indexCurl, middleCurl, ringCurl, pinkyCurl };

        for (int i = 0; i < currentCurlValues.Length; i++)
        {
            //Debug.Log(currentCurlValues[i]);
            fingerData.Add(currentCurlValues[i]);
        }
        g.fingerCurls = fingerData;

        gestures.Add(g);
        counterAlphabet++;
        //letter.text = alphbet[counterAlphabet].ToString();
    }

    Gesture RecognizeGesture()
    {
        float thumbCurl = HandPoseUtils.ThumbFingerCurl(Handedness.Right);
        float indexCurl = HandPoseUtils.IndexFingerCurl(Handedness.Right);
        float middleCurl = HandPoseUtils.MiddleFingerCurl(Handedness.Right);
        float ringCurl = HandPoseUtils.RingFingerCurl(Handedness.Right);
        float pinkyCurl = HandPoseUtils.PinkyFingerCurl(Handedness.Right);
        float[] currentCurlValues = { thumbCurl, indexCurl, middleCurl, ringCurl, pinkyCurl };

        bool inRange = false;
        for (int i = 10; i < gestures.Count; i++)
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

        float thumbCurl = HandPoseUtils.ThumbFingerCurl(Handedness.Right);
        float indexCurl = HandPoseUtils.IndexFingerCurl(Handedness.Right);
        float middleCurl = HandPoseUtils.MiddleFingerCurl(Handedness.Right);
        float ringCurl = HandPoseUtils.RingFingerCurl(Handedness.Right);
        float pinkyCurl = HandPoseUtils.PinkyFingerCurl(Handedness.Right);

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
