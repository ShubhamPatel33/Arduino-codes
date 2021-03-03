int IR_pin = 7;
int people =0;
int led = 8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(IR_pin ,INPUT);ghn
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int IR_status = digitalRead(IR_pin);
  if(IR_status == 0){
    Serial.println("Deteced");
    people++;
    Serial.println(people);
  }else{
    Serial.println("No Obstacle");
  }

  if(people > 10){
    digitalWrite(led,HIGH);
  }
  delay(1000);

}
