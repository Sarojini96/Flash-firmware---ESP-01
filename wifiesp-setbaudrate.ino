#include<SoftwareSerial.h> 
SoftwareSerial esp(4, 5); 
void setup()  
{ 
  esp.begin(115200); 
  Serial.begin(9600); 
} 
void loop()  
{ 
  esp.println("AT+CIOBAUD=9600"); 
  esp.println("AT"); 
  for (int i = 0; i < 100; i++) 
  { 
    if (esp.available() > 0) 
    { 
      char x = esp.read(); 
      Serial.print(x); 
    } 
 
 
    delay(1); 
  } 
} 
