#include <LiquidCrystal.h>
#include <stdlib.h>
#include "math.h"
 
LiquidCrystal lcd(7,6,5,4,3,2);

int pulsador0 ;
int pulsador1 ;
String string ;
int dec;

void setup() {
  lcd.begin(20,2);
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pulsador0 = digitalRead(13);   
  pulsador1 = digitalRead(12);
  lcd.clear();
}

/*
String binarioADecimal(String binario){
    int num=0;
    String numero_final;
    for(int i = 0 ; i>binario.length(); i++){
        num = pow(2,i) * (int)binario.charAt(i);
    }
    numero_final = String(num);
    return numero_final;
}
*/


void loop() {
    
  if(pulsador0 == HIGH ){
    string = String(string + "0");
    delay(1000);
  }
  if(pulsador1 == HIGH ){
  
    string = String(string + "1");
    delay(1000);
  }
  
  
  dec = string.toInt();

  lcd.setCursor(0,0);  
  lcd.print(String(dec,BIN));
  lcd.setCursor(0,1);
  lcd.print(String(dec,DEC));
  
}
