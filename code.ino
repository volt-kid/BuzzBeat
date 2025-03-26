
int holder = 8;  // STORE PIN
void setup(){
  pinMode(holder, OUTPUT); // SETUP PIN
}

void loop(){
  
  
  digitalWrite(holder, HIGH); // TURN ON LED FOR 0.125 SECOND
  tone(holder, 1000); // BUZZ FOR 0.125 SECOND
  delay(125); // WAIT FOR 0.125 SECOND
  digitalWrite(holder, LOW); // TURN OF LED
  noTone(holder); //STOP BUZZ 
  
  delay(625); // WAIT FOR 0.625 SECOND
  
  
  digitalWrite(holder, HIGH); // TURN ON LED FOR 0.125 SECOND
  tone(holder, 1000); // BUZZ FOR 0.125 SECOND
  delay(125); // WAIT FOR 0.125 SECOND
  digitalWrite(holder, LOW); // TURN OF LED
  noTone(holder); //STOP BUZZ 
  
  delay(125); // WAIT FOR 0.125 SECOND
  
  
  digitalWrite(holder, HIGH); // TURN ON LED FOR 0.125 SECOND
  tone(holder, 1000); // BUZZ FOR 0.125 SECOND
  delay(125); // WAIT FOR 0.125 SECOND
  digitalWrite(holder, LOW); // TURN OF LED
  noTone(holder); //STOP BUZZ 
  
  
  delay(375); // WAIT FOR 0.125 SECOND
  
  
  digitalWrite(holder, HIGH); // TURN ON LED FOR 0.125 SECOND
  tone(holder, 1000); // BUZZ FOR 0.125 SECOND
  delay(125); // WAIT FOR 0.125 SECOND
  digitalWrite(holder, LOW); // TURN OF LED
  noTone(holder); //STOP BUZZ 
  
  
  delay(375); // WAIT FOR 0.375 SECOND
  
 
}

