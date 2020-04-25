int trigpin = 9;
int echopin = 10;
float distance, duration;
void setup()
{
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
Serial.begin(11200);// baud rate or data transfer rate is set at 11200 bits per second
}
void loop()
{digitalWrite(trigpin,LOW);//the trigpin goes to low state
delay(2);
digitalWrite(trigpin,HIGH);//tigpin sends in a burst of waves for 10ms
delay(10);
duration = pulseIn(echopin,HIGH);// this function finds the  duration for the signal to reach reciever
distance = (34.3*duration)/2; // we are calcultating the distance travelled in cms
Serial.print("distance :");
Serial.print(distance);
Serial.print("cms");
  
  
  
}
