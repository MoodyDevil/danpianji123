#include <ioCC2530.h>
#include "delay.h"
#include "Buzzer.h"

#define K6 P2_0

void key_init(void){
  P2SEL &= ~0x01;
  P2DIR &= ~0x01;
  
  IEN2  |= 0x02;
  PICTL |= 0x08;
  P2IEN |= 0x01;
  EA = 1;
}
unsigned int i = 0;

void main(void){
  
  buzzer_init();
  
  key_init();
  
  while(1){
      BUZZER = 1;
    }
}

#pragma vector = P2INT_VECTOR
__interrupt void P2_ISR(void){
  EA = 0;
  if(P2IFG & 0x01){
    P2IFG &= ~0x01;
    delay_ms(10);
    if(K6 == 0){
      BUZZER = 0;
      delay_ms(100);
    }
  }
  P2IF = 0;
  EA = 1;
}