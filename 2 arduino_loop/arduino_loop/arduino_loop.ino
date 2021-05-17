

int redledpin=13; 
int yellowledpin=12; 
int redontime=500;
int redofftime=500;
int yellowontime=500;
int yellowofftime=500;
int ledblink=10;
int yellowblink=5;

void setup(){
  
pinMode (redledpin,OUTPUT);
pinMode (yellowledpin,OUTPUT);
}

void loop(){

  for (int j=1; j<=ledblink; j=j+1){
  digitalWrite(redledpin,HIGH); // 10 TIme red led blik
  delay (redontime);
  digitalWrite(redledpin,LOW);
  delay(redofftime);
  
  }
  
  digitalWrite(redledpin,HIGH);
  delay (redontime);
  digitalWrite(redledpin,LOW);
  delay(redofftime);
  
  digitalWrite(redledpin,HIGH);
  delay (redontime);
  digitalWrite(redledpin,LOW);
  delay(redofftime);
  
  digitalWrite(redledpin,HIGH);
  delay (redontime);
  digitalWrite(redledpin,LOW);
  delay(redofftime);
  
  digitalWrite(redledpin,HIGH);
  delay (redontime);
  digitalWrite(redledpin,LOW);
  delay(redofftime);
  
  digitalWrite(redledpin,HIGH);
  delay (redontime);
  digitalWrite(redledpin,LOW);
  delay(redofftime);
    
  digitalWrite(redledpin,HIGH);
  delay (redontime);
  digitalWrite(redledpin,LOW);
  delay(redofftime);
  
  digitalWrite(redledpin,HIGH);
  delay (redontime);
  digitalWrite(redledpin,LOW);
  delay(redofftime);
  
  digitalWrite(redledpin,HIGH);
  delay (redontime);
  digitalWrite(redledpin,LOW);
  delay(redofftime);
  
  digitalWrite(redledpin,HIGH);
  delay (redontime);
  digitalWrite(redledpin,LOW);
  delay(redofftime);
  
  digitalWrite(redledpin,HIGH);
  delay (redontime);
  digitalWrite(redledpin,LOW);
  delay(redofftime);
  
  for(int i=1; i<=yellowblink; i=1+1){
  digitalWrite (yellowledpin,HIGH);
  delay(yellowontime);
  digitalWrite (yellowledpin,LOW);
  delay (yellowofftime);
  }
  
}
