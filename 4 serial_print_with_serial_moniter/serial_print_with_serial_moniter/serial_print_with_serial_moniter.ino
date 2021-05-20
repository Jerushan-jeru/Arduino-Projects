

int redledpin=13; 
int yellowledpin=12; 
int redontime=500;
int redofftime=500;
int yellowontime=500;
int yellowofftime=500;
int ledblink=5;
int yellowblink=7;
String redmessage= "THE RED LED IS BLINGING";
String yellowmessage = "THE YELLOW LED IS BLINKING";


void setup(){
Serial.begin (9600);
String wc1="WELLCOME TO";
String wc2=" MY PROGRAM";
String wc3;
wc3= wc1+wc2;
Serial.println (wc3);
Serial.print (wc1);
Serial.println (wc2);
pinMode (redledpin,OUTPUT);
pinMode (yellowledpin,OUTPUT);
}

void loop(){
 Serial.println (redmessage);
  for (int j=1; j<=ledblink; j=j+1){
    Serial.print ("   Youer LED is on #: ");  
    Serial.println (j);
    digitalWrite(redledpin,HIGH); // 10 TIme red led blik
    delay (redontime);
    digitalWrite(redledpin,LOW);
    delay(redofftime); 
  }
  
Serial.println("");

Serial.println (yellowmessage);
  for(int i=1; i<=yellowblink; i=i+1){
    Serial.print("  Your led is on #: "); 
    Serial.println (i);
    digitalWrite (yellowledpin,HIGH);
    delay(yellowontime);
    digitalWrite (yellowledpin,LOW);
    delay (yellowofftime);
   }
Serial.println (" ");
}
