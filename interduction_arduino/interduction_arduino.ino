int ledpin=13;
int ontime=500;
int offtime=500;



void setup(){
pinMode (ledpin,OUTPUT);

}

void loop (){
digitalWrite (ledpin,HIGH);
delay (ontime);
digitalWrite (ledpin,LOW);
delay(offtime);
}
