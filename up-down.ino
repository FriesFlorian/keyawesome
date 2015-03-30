int trigPin = 6;
int echoPin = 7;

void setup() {
  pinMode(trigPin, OUTPUT); // trigger pin
  pinMode(echoPin, INPUT); // echo pin
  Keyboard.begin();
}

void loop() {
   long duration, distance, last_value;
   while(1) {
     digitalWrite(trigPin, LOW);
     delayMicroseconds(2);
     digitalWrite(trigPin, HIGH);
     delayMicroseconds(10);
     digitalWrite(trigPin, LOW);
     duration = pulseIn(echoPin, HIGH);
     distance = (duration/2) / 29.1;
     
     if(distance > last_value) {
       Keyboard.press(KEY_UP_ARROW);       
     }
     else if(distance < last_value) {
       Keyboard.press(KEY_DOWN_ARROW);
     }
   
     Keyboard.releaseAll();
     
     delay(90);
     last_value = distance;
   }
}





