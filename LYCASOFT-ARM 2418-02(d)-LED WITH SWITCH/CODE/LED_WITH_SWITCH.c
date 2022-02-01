#include <lpc214x.h>   

#define LED_1 0
#define SW_1	1

#define LED_2	30
#define SW_2	31

int main() 
{
	PINSEL0 = 0x00000000;
	PINSEL1 = 0x00000000;

	IODIR0 = 0x40000001;
	
	IOPIN0 = 0X00000000;
		
	while(1)
	{
		if(IOPIN0 == 0x00000002)
		{  
			IOSET0 = 0x00000001;
		}
		
		if(IOPIN0 == 0x80000000)
		{  
			IOSET0 = 0x40000000;
		}
		
		else
		{
			IOCLR0 = 0x40000001;
		}	
	}
}