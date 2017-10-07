int analogPin = A0;     // potentiometer wiper (middle terminal) connected to analog pin 3

                       // outside leads to ground and +5V

int val = 0;           // variable to store the value read



void setup()

{

  Serial.begin(9600);          //  setup serial

}



void loop()

{

  val = analogRead(analogPin);    // read the input pin

  //Serial.println(val);             // debug value
  if (val < 60){
     // transform.Translate (Vector3.down * movement, Space.World);
     Serial.println("1");
    }
    
    if (val < 200 && val > 100){
   //   transform.Translate (Vector3.up * movement, Space.World);
      Serial.println("2");
    }
    
    if (val < 500 && val > 200){
   //   transform.Translate (Vector3.right * movement, Space.World);
      Serial.println("3");
    }
    
    if (val > 500){
    //  transform.Translate (Vector3.left * movement, Space.World);
      Serial.println("4");
    }
}
