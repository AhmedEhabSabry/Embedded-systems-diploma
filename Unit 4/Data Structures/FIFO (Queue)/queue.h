#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define size 5
//#define unsigned int uint8

//type definition section


typedef struct {
	unsigned int length;
	unsigned int count;
	unsigned int* base;
	unsigned int* head;
	unsigned int* tail;
}queue;

typedef enum{
no_error,
queue_full,
queue_empty,
queue_null
}queue_status;

queue_status queue_init (queue *queue_buf,unsigned int * temp,unsigned int length);
queue_status queue_push (queue *queue_buf,unsigned int  item);
queue_status queue_pop (queue *queue_buf,unsigned int * item);


#endif // QUEUE_H_INCLUDED
