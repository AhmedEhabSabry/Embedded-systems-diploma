#ifndef UART_H_
#define UART_H_

#define UART0DR *(volatile unsigned int* const)(0x101f1000)

void Uart_send_string(unsigned char *Ptr);

#endif /* UART_H_ */