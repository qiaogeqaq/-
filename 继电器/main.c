#include "reg52.h"

typedef unsigned int uint16;
typedef unsigned char uint8;

sbit relay=P1^4;

 int delay(uint16 i)
 {
 	while(i--);
	return 0;
 }

int main(void)
{
	relay = 0;
	delay(500000);
	relay = 1;
	while(1)
	{
		
	}
	return 0;
}