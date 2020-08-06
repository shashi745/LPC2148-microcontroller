
	
#include<lpc21xx.h>    ////importing LPC2148 library
#include<stdint> 
void delay(uint16_t j) //function for delay for 12MHz clockspeed
{
	uint16_t x,i;
	for(i=0;i<j;++i)
	{
		for(x=0;x<60000;x++);
	}
	
}
int main(void)
{
	
	while(1)
	{
		IO0DIR=(1<<10); //initializing pin 10
		IO0SET = (1<<10);//setting pin 10 to high
		delay(500);       //wait for 500ms
		IO0CLR = (1<<10); //setting pin 10 to low
		delay(500);        //wait for 500ms
		IO0DIR=(1<<11);//initializing pin 11
		IO0SET = (1<<11);//setting pin 11 to high
		delay(500);       //wait for 500ms
		IO0CLR = (1<<11); //setting pin 11 to low
		delay(500);        //wait for 500ms
		IO0DIR=(1<<12);//initializing pin 12
		IO0SET = (1<<12);//setting pin 12 to high
		delay(500);       //wait for 500ms
		IO0CLR = (1<<12); //setting pin 12 to low
		delay(500);       //wait for 500ms
	}
}
