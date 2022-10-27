#include <Servo.h>
Servo dispservo ;
int pos = 0;
int motorpin1 = 11;
char c;
int flag5 = 0;

void setup()
{ 
	dispservo.attach(10);
	pinMode(motorpin1, OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	if (Serial.available())
	{
		c = Serial.read();
		Serial.println(c);
		if (c == '5')
		{
  			if (flag5 == 0)
  			{
    				digitalWrite(motorpin1, HIGH);
    				delay(10000);
    				digitalWrite(motorpin1, LOW);
    				delay(3000);
    				Serial.println(c);
    				flag5 = 1;
    				dispservo.write(90);
    				delay(2000);
    				dispservo.write(0);
    				delay(3000);
  			}
    			flag5 = 0;
		}
	}
}