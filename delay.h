#include <ioCC2530.h>

#define CLKSPD (CLKCONCMD & 0x07)

void halWait(unsigned char wait);				//�ӳٺ���ԭ��
void delay_ms(unsigned short t);
