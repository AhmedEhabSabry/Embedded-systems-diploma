#ifndef lifo_H_
#define lifo_H_

#include "stdint.h"

#define size 5
unsigned int uart_buf[size];

//start  type definition section

typedef struct {
	unsigned int length;
	unsigned int count;
	unsigned int * base;
	unsigned int *head;
}lifo;

typedef enum{
	lifo_No_Error,
	lifo_Full,
	lifo_Empty,
	lifo_Null
}lifo_status;

//end type definition section

//function definition section

//initialize the stack
lifo_status lifo_init(lifo* lifo_buf, unsigned int * buf , unsigned int length);
//add element in the last of the stack
lifo_status lifo_add(lifo* lifo_buf, unsigned int item);
//delete the last element in the stack
lifo_status lifo_pop(lifo* lifo_buf, unsigned int* item);
//check if  the stack is full
lifo_status lifo_is_full(lifo* lifo_buf);
//check if the stack is empty
lifo_status lifo_is_empty(lifo* lifo_buf);
//print the element of the stack
void lifo_print(lifo* lifo_buf);

//end function definition section
#endif
