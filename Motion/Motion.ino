int touch_pin = 2;0
int led = 8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(touch_pin ,INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int touch_status = digitalRead(touch_pin);
  if(touch_status == 1){
    Serial.println("touch detected");
    digitalWrite(led,HIGH);
    
  }else{
    Serial.println("No touch");
    digitalWrite(led,LOW);
  }
  
 // delay(1000);

}
