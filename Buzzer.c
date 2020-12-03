#include <ioCC2530.h>
#include "Buzzer.h"

void buzzer_init(void){
  P0SEL &= ~0x08;
  P0DIR |= 0x08;
  BUZZER = 1;
}
