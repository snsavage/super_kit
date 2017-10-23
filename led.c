#include <wiringPi.h>
#include <stdio.h>

#define LedPin 0

int main(void)
{
	if(wiringPiSetup() == -1){
		printf("setup wiringPi failed !");
	}

	pinMode(LedPin, OUTPUT);

	int i = 0;

	while(i < 10) {
		digitalWrite(LedPin, LOW);
		printf("led on...\n");
		delay(2000);
		digitalWrite(LedPin, HIGH);
		printf("...led off\n");
		delay(2000);
		i++;
	}
	return 0;
}
