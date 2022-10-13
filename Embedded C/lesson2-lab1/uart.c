#include "uart.h"

void Uart_send_string(unsigned char *Ptr)
{
	while(*Ptr != '\0')
	{
		UART0DR = (unsigned int)(*Ptr);
		Ptr++; 
	}
}