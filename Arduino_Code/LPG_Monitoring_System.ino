#include <LiquidCrystal.h>
#include <GyverHX711.h>
const int rs =8, en =9, d4 =10, d5 =11, d6 =12, d7 =13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
#include <Wire.h>
GyverHX711 sensor(4, 5, HX_GAIN64_A);
int wgt = 0;
int buz=7;
int kk=0;
void setup()
{
  Serial.begin(9600);
 sensor.tare(); 
  pinMode(buz,OUTPUT);
  lcd.begin(16, 2);  
  lcd.print("  WELCOME");
  lcd.setCursor(0,1);
  lcd.print("INITIALIZING"); 
  delay(1000); 
  lcd.clear();
  delay(500);
 
  
}
void loop()
{ 
 lcd.setCursor(0, 0);
  lcd.print("WGT:" + String(wgt)+" g");
  delay(1000);
  if (sensor.available()) {
    wgt = sensor.read() / 230;
    if (wgt < 2) wgt = 0;
  }
  if (  wgt>0 && wgt<50){
 digitalWrite(buz,1);
 lcd.setCursor(5,1);
 lcd.print("GAS LEL LOW");
  send_sms(1);
  digitalWrite(buz,0);
  while(1);
  }
  else 
{ lcd.clear();
   lcd.setCursor(5,1);
 lcd.print("  NORMAL  ");
 
  digitalWrite(buz,0); 
}
}
void send_sms(int k)
  {
Serial.println("Sending SMS...");
Serial.println("AT");    
delay(1000);  
Serial.println("ATE0");    
delay(1000);  
Serial.println("AT+CMGF=1");    
delay(1000);  
Serial.print("AT+CMGS=\"9381365373\"\r\n");// Replace x with mobile number
delay(1000);
if(k==1)
Serial.print("GAS LEVEL IS LOW");
delay(500);
Serial.print(char(26));
delay(2000); 
  }
