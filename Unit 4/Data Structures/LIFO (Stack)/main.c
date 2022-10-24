/*
Name : Ahmed Ehab
Data : 20/10/2022
Title : LIFO implementation assignment
*/

#include "lifo.h"

int main(void) {

    unsigned int i,data;
    unsigned int *uart_stack_buf;
    lifo uart_stack;

		if(lifo_init(&uart_stack,uart_stack_buf,5) == lifo_No_Error)
			printf("stack initialized \n");

		for(i=0;i<sizeof(uart_stack_buf);i++){
			if(lifo_add(&uart_stack , i) == lifo_No_Error ){
				printf("\nadd (%d) in stack done\n",i);
			}else
				printf("can not add (%d) in the stack as stack is full\n",i);
		}

        lifo_print(&uart_stack);
		if(lifo_get(&uart_stack,&data) == lifo_No_Error)
			printf("pop the last element from the stack: %d\n",data);

		if(lifo_get(&uart_stack,&data) == lifo_No_Error)
			printf("pop the last element from the stack: %d\n",data);

		if(lifo_get(&uart_stack,&data) == lifo_No_Error)
				printf("pop the last element from the stack: %d\n",data);;

		if(lifo_get(&uart_stack,&data) == lifo_No_Error)
				printf("pop the last element from the stack: %d\n",data);

		if(lifo_get(&uart_stack,&data) == lifo_No_Error)
				printf("pop the last element from the stack: %d\n",data);

		if(lifo_get(&uart_stack,&data) == lifo_No_Error)
				printf("pop the last element from the stack: %d\n",data);

		lifo_print(&uart_stack);

}