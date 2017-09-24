#define PIR_MOTION_SENSOR 3//Use pin 3 to receive the signal from the module 
//#define trig 4

void setup()
{
	Serial.begin(9600);
  //pinMode(trig, OUTPUT)
	pinMode(PIR_MOTION_SENSOR, INPUT);
}

void loop() 
{
	delay(1000);
	int sensorValue = digitalRead(PIR_MOTION_SENSOR);

	if(sensorValue==HIGH)//if it detects moving people
		Serial.println("Motion Detected");
	else
		Serial.println("No Movement");
}
