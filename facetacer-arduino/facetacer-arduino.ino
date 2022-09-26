int lightPin = 13;
 
void setup() 
{ 
  pinMode(lightPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String receivedString = "";
    while (Serial.available() > 0) {
      receivedString += char(Serial.read ());
    }
    Serial.println(receivedString);
    if(receivedString == "1"){
      digitalWrite(lightPin,HIGH);
      delay(5000);
    }
    else
      digitalWrite(lightPin,LOW);
    
  }

}
