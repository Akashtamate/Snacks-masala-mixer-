int buzzer = 5;
char c;
int flag5 = 0;

void setup()
{
	pinMode(buzzer, OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	if (Serial.available())
	{
		c = Serial.read();
		serial.println(c);
		if (c == '5')
		{
  			if (flag5 == 0)
  			{
    				tone(buzzer, 450);
    				delay(6000);
    				noTone(buzzer);
  			}
    			flag5 = 0;
		}
	}
}
