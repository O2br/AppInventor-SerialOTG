/*
 * Test program, echo serial in 
 * if "1", LED on. if "0" LED off
 */
 
 void setup()  
 {  
  Serial.begin(9600);  
  pinMode(LED_BUILTIN, OUTPUT);
 } 
  
 void loop()  
 {  
  char c;
  if(Serial.available())  
  {  
   c = Serial.read();  
     Serial.print(c);  
     if (c==0x31) digitalWrite(LED_BUILTIN, HIGH);
     if (c==0x30) digitalWrite(LED_BUILTIN, LOW);
     
  }  
 }  
