#include "queue.h"
#include "stdio.h"

queue_status queue_init (queue *queue_buf,unsigned int * buf,unsigned int length){

if(buf == NULL)
		return queue_null;

queue_buf->base=buf;
queue_buf->count=0;
queue_buf->head=buf;
queue_buf->length=length;
queue_buf->tail=buf;

return no_error;
}
queue_status queue_push (queue *queue_buf,unsigned int  item){
    //check if the queue is null
    if(!queue_buf->base||!queue_buf->tail||!queue_buf->head)
		return queue_null;

     //check if the 	buffer is full
	if(queue_buf->count == queue_buf->length)
		return queue_full;
	//Add item in address that the buffer head point to
    *(queue_buf->head)=item;
    //increment the count
	queue_buf->count++;

    //if we are in the last of the queue make head point to the first of the queue
    if(queue_buf->head == (queue_buf->base + (queue_buf->length * sizeof(unsigned int))))
		queue_buf->head = queue_buf->base  ;
	else
		queue_buf->head++;


    return no_error;
}
queue_status queue_pop (queue *queue_buf,unsigned int * item){

if(!queue_buf->base || !queue_buf->head || !queue_buf->tail)
		return queue_null;
if(queue_buf->count == 0)
		return queue_full;
*item = *(queue_buf->tail);
	queue_buf->count--;

	if(queue_buf->tail == (queue_buf->base + ((queue_buf->length )* sizeof(unsigned int))))
		queue_buf->tail = queue_buf->base  ;
	else
		queue_buf->tail++;

	return no_error;
}
