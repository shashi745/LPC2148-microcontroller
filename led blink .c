
#include <lpc214x.h>       //import LPC libraries
unsigned int delay;
int main(void)
{
  IO0DIR = (1<<10);   // declare  P0.09 as Output
  
  while(1)  // forever loop 
  {
    IO0CLR = (1<<10);    //  clear to turn led on 
    for(delay=0;delay<; delay++);
    IO0SET = (1<<10);    //   set to Turn Led on 
    for(delay=0; delay<500000; delay++); 
  }
}
