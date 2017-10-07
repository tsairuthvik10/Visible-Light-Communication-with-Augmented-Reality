int ledPin = 10;
//int DC = 0.0019/100;
//float Ton = 300;
//int Toff = Ton/DC-Ton;
//float Tperiod = 500;
//long Tperiod = 1000000;
//float Toff = Tperiod - Ton;
//float Toff= (Tperiod - Ton)/1000;
 
void setup() {
 Serial.begin(9600);
 pinMode (ledPin, OUTPUT);
 
}

void loop(){
 if (Serial.available()>0){
    int rx = Serial.parseInt();
    Serial.println(rx);
    switch (rx) {
      case 1:
            analogWrite(ledPin, 255);
            break;
      case 2:
            analogWrite(ledPin, 100);
            break;
      case 3:
            analogWrite(ledPin, 10);
            break;
      case 4:
            analogWrite(ledPin, 1);
            break;
    }
 }

}

