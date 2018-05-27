#include "reg52.h"
#include "intrins.h"


typedef unsigned int uint16;
typedef unsigned int uint8;	   

sbit LSA = P2^2;
sbit LSB = P2^3;
sbit LSC = P2^4;

uint8 code A_list[16] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,
							0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};


int delay(uint16 i)					  //延时函数
{
	while(i--);
	return 0;
}

void digdisplay()
{
	uint8 i;
	for(i=0;i<8;i++)
	{
		switch(i)									//74hc138芯片真值表
		{
			case 0:									//循环点亮
				LSA=0;LSB=0;LSC=0;
				break;
			case 1:
				LSA=1;LSB=0;LSC=0;
				break;
			case 2:
				LSA=0;LSB=1;LSC=0;
				break;
			case 3:
				LSA=1;LSB=1;LSC=0;
				break;
			case 4:
				LSA=0;LSB=0;LSC=1;
				break;
			case 5:
				LSA=1;LSB=0;LSC=1;
				break;
			case 6:
				LSA=0;LSB=1;LSC=1;
				break;
			case 7:
				LSA=1;LSB=1;LSC=1;
				break;

		}
		P0 = A_list[i];
		delay(100000);	   //控制生成间隔
		P0 = 0x00;		  //消影
	}
}
							




int main(void)
{
	while(1)
	{
	 	digdisplay();
	}

	return 0;
}