#include<SoftwareSerial.h>
SoftwareSerial mySerial(2,3); //tx pin 2 rx pin 3
String voice;
int relay= 13;
void setup() {

mySerial.begin(9600);
Serial.begin(9600);
pinMode(relay,OUTPUT);
}

void loop() {

if(mySerial.available()>0)
{
   
    voice=mySerial.readString();
  Serial.println( voice);
  if(voice=="light on")
  {
    digitalWrite(relay,LOW);
        voice="";
    }
      if(voice=="light off")
  {
    digitalWrite(relay,HIGH);
    voice="";
    }
   
}
}
