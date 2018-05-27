#include "reg52.h"

typedef unsigned int uint16;
typedef unsigned char uint8;

sbit led=P0^0;
sbit k1=P1^0;	 //定义独立按键

int delay(uint16 i)  
{	
	while(i--);
	return 0;
}

void keypros()
{
	if(k1 == 0)
	{
		delay(1000);		  //延时消抖动10毫秒
		if(k1 == 0)
		{
			led = ~led;
		}
		while(k1 == 0)
			continue;

	}
}

int main(void)
{
	led = 0;
	while(1)
	{
		keypros();			
	}
	return 0;
}