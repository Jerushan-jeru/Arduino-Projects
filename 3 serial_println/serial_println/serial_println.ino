

int redledpin=13; 
int yellowledpin=12; 
int redontime=500;
int redofftime=500;
int yellowontime=500;
int yellowofftime=500;
int ledblink=5;
int yellowblink=5;

void setup(){
Serial.begin (9600);
pinMode (redledpin,OUTPUT);
pinMode (yellowledpin,OUTPUT);
}

void loop(){
 Serial.println ("Red led blinking now");
  for (int j=1; j<=ledblink; j=j+1){
    Serial.print ("   Youer LED is on #: ");  
    Serial.println (j);
    digitalWrite(redledpin,HIGH); // 10 TIme red led blik
    delay (redontime);
    digitalWrite(redledpin,LOW);
    delay(redofftime); 
  }
  
Serial.println("");
Serial.println ("Yellow led blinking now");
  for(int i=1; i<=ledblink; i=i+1){
    Serial.print("  Your led is on #: "); 
    Serial.println (i);
    digitalWrite (yellowledpin,HIGH);
    delay(yellowontime);
    digitalWrite (yellowledpin,LOW);
    delay (yellowofftime);
   }
Serial.println (" ");
}
