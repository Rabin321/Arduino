int LED1=13;
int LED2=12;


void setup() {
 pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  
}

void loop() {
 digitalWrite(LED1,HIGH);
 delay(180);
 digitalWrite(LED1,LOW);
  delay(210);
   digitalWrite(LED1,HIGH);
 delay(200);
  digitalWrite(LED1,LOW);
  delay(200);
digitalWrite(LED2,HIGH);
 delay(600);
 digitalWrite(LED2,LOW);
 delay(30);


}
