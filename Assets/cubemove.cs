using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO.Ports;

public class cubemove : MonoBehaviour {
	private float movement;
	SerialPort serial = new SerialPort("COM3", 9600);
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (!serial.IsOpen)
			serial.Open ();
		
		int data = int.Parse (serial.ReadLine());
		movement = 0.001f;
		MoveObject (data);
	}
	
	void MoveObject(int direction){
		if (direction == 1){
			transform.Translate (Vector3.down * movement, Space.World);
		}
		
		if (direction == 2){
			transform.Translate (Vector3.up * movement, Space.World);
		}
		
		if (direction == 3){
			transform.Translate (Vector3.right * movement, Space.World);
		}
		
		if (direction == 4){
			transform.Translate (Vector3.left * movement, Space.World);
		}
	}

}
