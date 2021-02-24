const int relayPin = 10;  
const int ldrPin = A0;  


void setup() {

  Serial.begin(9600);
  pinMode(relayPin, OUTPUT);  
  pinMode(ldrPin, INPUT);  
}

void loop() {

  int ldrStatus = analogRead(ldrPin);   



   if (ldrStatus <=300) {

    digitalWrite(relayPin, HIGH);               
  
    
   }
  else {

    digitalWrite(relayPin, LOW);          
    
  }
  
}
