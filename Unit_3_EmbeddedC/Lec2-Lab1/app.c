#include "uart.h"

unsigned char stringname[100]="Learn in depth: Ahmed Hesham";

void main(void)
{
	Uart_send_string(stringname);
}
