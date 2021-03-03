#include <LiquidCrystal.h>
#include <Keypad.h>

  char pass = "1234";
  int pos = 0;
  int count = 0;
  const byte rows = 4;
  const byte cols = 4;
  
  char keyMap[rows][cols] = {
    {'1','2','3','A'},
    {'4','5','6','B'},
    {'7','8','9','C'},
    {'*','0','#','D'}
  };

  byte rowPins[rows] = {1,2,3,4};
  byte colPins[cols] = {5,6,7,8};

  Keypad myKeypad = Keypad(makeKeymap(keyMap),rowPins,colPins,rows,cols);
  ///const int rs =12,en=11,d4 =5,d5=4,d6=3,d7=2;
  LiquidCrystal lcd(A0,A1,A2,A3,A4,A5);
 
void setup() {
   lcd.begin(16,2);
   

}

void loop(){

  char Key = myKeypad.getKey();
  lcd.setCursor(4,0);
   lcd.print("YO Welcome");
  lcd.setCursor(1,1);
  lcd.print("Enter Password");
  if(Key != NO_KEY){
    if(Key == pass[pos]){
      pos++;
      if(pos >=3){
        lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Right Password");
    lcd.setCursor(1,1);
    lcd.print(Key);
    delay(1000);
    count =0;
    lcd.clear();
        
      }
    }
    else{
      count++;
    }
  }
  if(count ==4){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Wrong Password");
    delay(2000);
    count =0;
    lcd.clear();
  }

}
