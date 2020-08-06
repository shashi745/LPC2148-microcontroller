#include<lpc214x.h>
#include<stdint.h>


int main(void)
{
	IO0DIR=0x0000000F;
	
	while(1)
	{
		IO0PIN=IO0PIN | 0x00000001;
		if((IO0PIN && 0x00000002 )== 0x00000000)
		{
		IO0PIN=IO0PIN | 0x00000004;
		}
	
	}
}