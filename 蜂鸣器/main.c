#include "reg52.h"

typedef unsigned int uint16;
typedef unsigned char uint8;

sbit beep=P1^5;

int delay(uint16 i)  
{	
	while(i--);
	return 0;
}

int main(void)
{
	while(1)
	{
		beep = ~beep;
		delay(10);	
	}
	return 0;
}