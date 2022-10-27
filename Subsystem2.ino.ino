#include <Servo.h>
Servo cornservo ;
Servo saltservo ;
Servo chilliservo ;
Servo chatservo ;
int pos = 0;
char c;
int flag1 = 0;
int flag2 = 0;
int flag3 = 0;
int flag4 = 0;

void setup()
{
	cornservo.attach(6);
	saltservo.attach(7);
	chilliservo.attach(8);
	chatservo.attach(9);
	Serial.begin(9600);
}

void loop()
{
	if (Serial.available())
	{
		c = Serial.read();
		Serial.println(c);

		if (c == '1')
		{
  			if (flag1 == 0)
  			{
    				cornservo.write(180);
    				delay(5000);
    				cornservo.write(0);
    				flag1 = 1;
			} 
		}

		else if (c == '2')
		{
  			if (flag2 == 0)
			{
    				saltservo.write(180);
    				flag2 = 1;
    				delay(2000);
    				saltservo.write(0);
  			}
		}

		else if (c == '3')
		{
  			if (flag3 == 0)
 	 		{
    				chilliservo.write(180);
    				flag3 = 1;
    				delay(2000);
    				chilliservo.write(0);
  			}
		}

		else if (c == '4')
		{
  			if (flag4 == 0)
  			{
    				chatservo.write(180);
    				flag4 = 1;
    				delay(2000);
    				chatservo.write(0);
  			}
		}

    		flag1 = 0;
    		flag2 = 0;
    		flag3 = 0;
    		flag4 = 0;
	}
} 

