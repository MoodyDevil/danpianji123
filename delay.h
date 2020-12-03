#include <ioCC2530.h>

#define CLKSPD (CLKCONCMD & 0x07)

void halWait(unsigned char wait);				//ÑÓ³Ùº¯ÊýÔ­ÐÍ
void delay_ms(unsigned short t);
