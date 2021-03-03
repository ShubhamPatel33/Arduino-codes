const int ledPin =2;
const int buzzerPin = 8;
const int ldrPin =A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(buzzerPin,OUTPUT);
  pinMode(ldrPin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int ldrStatus = analogRead(ldrPin);
  if(ldrStatus >= 150){
    digitalWrite(ledPin, LOW);
    delay(100);
    noTone(buzzerPin);
    Serial.println("SAFE");
    Serial.println(ldrStatus);
    
  }
  else{
    tone(buzzerPin,100);
    digitalWrite(ledPin,HIGH);
    tone(buzzerPin,200,100);
    Serial.println(ldrStatus);
    Serial.println("Somebody is in ");
    
  }
  delay(100);
}
