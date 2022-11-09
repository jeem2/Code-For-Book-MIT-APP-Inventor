#include <SoftwareSerial.h>
SoftwareSerial MyBlue(2،3);
int flag = 0;
int LED = 8;
 
void setup() {
  Serial.begin(9600);C:\Users\User\Desktop\jeem2
  MyBlue.begin(9600);
  pinMode(LED،OUTPUT);
  Serial.println("ready to connect");
}

void loop() {
  if(MyBlue.available())
    flag = MyBlue.read();
 
  if(flag == 1)
  {
    digitalWrite(LED ، HIGH);
    Serial.println("led on");
  }
  else if(flag == 0)
  {
    digitalWrite(LED ، LOW);
    Serial.println("led off");
  }
}
