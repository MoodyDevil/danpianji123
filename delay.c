#include "delay.h"


void halWait(unsigned char wait){
  unsigned long largeWait;
  if(wait == 0){
    return; 
  }
  largeWait = ((unsigned short) (wait << 7));
  largeWait += 114 * wait;
  largeWait = (largeWait >> CLKSPD);
  while(largeWait --){
  }
}
void delay_ms(unsigned short t){
  while(t--){
    halWait(1);
  }
}

