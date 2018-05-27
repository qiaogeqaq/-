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
	while(1)
	{
	led = 0x06;
	delay(50000);
	led = 0x5b;
	delay(50000);
	led = 0x4f;
	delay(50000);
	}

	return 0;
}