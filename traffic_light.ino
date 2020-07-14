//traffic light system
int red=13;
int yellow=12;
int green=11;


void setup() {
 pinMode(red,OUTPUT);
   pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);

}
 

void loop() {
 digitalWrite(red,1);
 delay(4000);
 digitalWrite(red,0);
   digitalWrite(yellow,1);
 delay(4000);
  digitalWrite(yellow,0);
digitalWrite(green,1);
 delay(6000);
 digitalWrite(green,0);

}
