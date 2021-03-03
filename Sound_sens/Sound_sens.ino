
int ledpin = 9;
int senspin = 8;
boolean LastStatus = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(senspin,INPUT);
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  int SensorData = digitalRead(senspin);
  Serial.println(SensorData);
 if(SensorData == 1){
    
     Serial.println(LastStatus);//0
    
     
     if(LastStatus == false){
      LastStatus = true;
      digitalWrite(ledpin,HIGH);
      Serial.println("Clap detected");
      delay(1000);
    }
    else{
      Serial.println(LastStatus);//0
      LastStatus = false;
      digitalWrite(ledpin,LOW);
      Serial.println("Clap Not detected");
      delay(1000);
    }
  }
  else{
    Serial.println("No sound detected");
    delay(1000);
      
  }
}
