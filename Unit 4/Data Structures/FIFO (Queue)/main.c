#include <stdio.h>
#include <stdlib.h>
# include "queue.h"
unsigned int buffer[size];

int main()
{
    unsigned int i,*data=buffer;
    queue uart_queue;
		if(queue_init(&uart_queue,data,size) == no_error)
			printf("queue initialization is done sucessfully \n");

		for(i=0;i<5;i++){
			if(queue_push(&uart_queue , i) == no_error ){
				printf("add (%d) in queue is done\n",i);
			}
			else
				printf("add (%d) in queue is failed\n",i);
		}

		if(queue_pop(&uart_queue,&data) == no_error)
			printf("pop data from queue: %d \n",data);
		if(queue_pop(&uart_queue,&data) == no_error)
			printf("pop data from queue: %d \n",data);
		if(queue_pop(&uart_queue,&data) == no_error)
		      printf("pop data from queue: %d \n",data);

}
