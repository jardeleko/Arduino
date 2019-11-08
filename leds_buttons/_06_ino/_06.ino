const int buttonPin = 2;
const int buttonPin1 = 3;
const int ledPin = 13;

int buttonState = 0;

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin1, INPUT);
}
//  if((buttonState = digitalRead(buttonPin)) == HIGH)  digitalWrite(ledPin, HIGH);
/*
  if(digitalRead(buttonPin1) == HIGH)  digitalWrite(ledPin, HIGH);
  else if(digitalRead(buttonPin) == HIGH)  digitalWrite(ledPin, HIGH);    
  else if(digitalRead(buttonPin) == HIGH) && digitalRead(buttonPin1) == HIGH)) digitalWrite(ledPin, LOW);
  else digitalWrite(ledPin, LOW);
   
*/

void loop(){
  if(digitalRead(buttonPin) == HIGH && digitalRead(buttonPin1) == HIGH) digitalWrite(ledPin, LOW);
  else if(digitalRead(buttonPin) == HIGH) digitalWrite(ledPin, HIGH);
  else if(digitalRead(buttonPin1) == HIGH) digitalWrite(ledPin, HIGH);
  else digitalWrite(ledPin, LOW);
}


