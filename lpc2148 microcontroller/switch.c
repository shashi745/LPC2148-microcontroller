#include <lpc214x.h>   
#include<stdint.h>


int main() 
{
    unsigned int Status;

    
    
    IO0DIR = ((1<<6) | (0<<4)); // LED pin as output and Switch Pin as input 

  while(1)
    {

     /* Turn On all the leds and wait for one second */ 
        Status = (IO0PIN>>4) & 0x01 ;  // Read the switch status
       
       if(Status == 1)                 //Turn ON/OFF LEDs depending on switch status
       {  
         IO0PIN = (1<<6);
	         }
       else
       {
         IO0PIN = (0<<6);
       }      
    }
}
