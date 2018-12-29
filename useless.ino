#include<Servo.h>
Servo srv;
void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  digitalWrite(10, HIGH);
  srv.attach(12);
  int ran = random(1,1);
  if(ran == 1){
    turnOff0();
  }
  digitalWrite(10, LOW);  //to turn relay back off
}

void loop() {
  turnOff0();
  digitalWrite(10,LOW);
}

void turnOff0() {
  srv.write(90);
  delay(400);
  srv.write(0);
  delay(400);
}

 
