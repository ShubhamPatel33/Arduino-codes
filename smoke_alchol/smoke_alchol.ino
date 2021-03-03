int smoke_pin = A0;
int smoke_value = 0;
int ledpin = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  smoke_value = analogRead(smoke_pin);
  Serial.println(smoke_value);
  if(smoke_value > 500){
    digitalWrite(ledpin,HIGH);
  }else{
    digitalWrite(ledpin,LOW);
  }

}
