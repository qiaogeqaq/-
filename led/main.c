#include "reg52.h"
#include "intrins.h"

#define led P0					  //定义p0端口为led

typedef unsigned int uint16;
typedef unsigned int uint8;	   

//sbit led1 = P0^0;
//sbit led2 = P0^1;
//sbit led3 = P0^2;

int delay(uint16 i)					  //延时函数
{
	while(i--);
	return 0;
}

int main(void)
{
	uint8 i = 0;
	led = 0x01;
	while(1)
	{
	/*	for(i = 0;i < 8 ; i++)
		{
			led = (0x01<<i);				  //利用位移
			delay(50000);
		}
	*/

		 for(i = 0;i < 7;i++)
		 {
		 	led=_crol_(led,1);
			delay(50000);
		 }

	
//		led2 = 0;
//		led3 = 1;
	}

	return 0;
}