const int LM35 = A0;
float temperatura;
const int buzzer = 10;

void setup (){
Serial.begin(9600); 
pinMode(buzzer,OUTPUT);
}
void loop (){
  temperatura = (float(analogRead(LM35))*5/(1023))/0.01;
  Serial.print("Temperatura: ");
  Serial.println(temperatura);
  delay(2000);   
  delay(500);
  delay(10);  
  
  if(temperatura > 25.0){
    digitalWrite(buzzer, HIGH);
    tone(buzzer,261);
  }   
  
  else{(temperatura < 24.9);
    digitalWrite (buzzer, LOW);
    noTone(buzzer);
  }
 } 
