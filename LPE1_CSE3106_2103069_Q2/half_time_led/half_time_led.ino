const int RLED = PB1 ;
const int GLED = PB0 ;
const int potPin = PA0 ;

void setup(){
  pinMode(RLED , OUTPUT);
  pinMode(GLED , OUTPUT);
  pinMode(potPin , INPUT);
}

void loop(){
  int potValue = analogRead(potPin);
  int brightness = map(potValue , 0 , 1023 , 0 , 255);
  if(brightness >= 128){
    analogWrite(RLED , brightness);
    delay(10);
    analogWrite(GLED, 0);
    delay(10);
  }
  else if (brightness <128){
    analogWrite(GLED , brightness);
    delay(10);
    analogWrite(RLED , 0);
    delay(10);
  }
}