#include "lifo.h"
#include "stdio.h"

lifo_status lifo_init(lifo* lifo_buf, unsigned int * buf,unsigned int length)
{
	if(buf == NULL)
		return lifo_Full;
	lifo_buf->base = buf;
	lifo_buf->head= buf;
	lifo_buf->length = length;
	lifo_buf->count = 0 ;

	return lifo_No_Error;
}
lifo_status lifo_add(lifo* lifo_buf, unsigned int  item){

	//	buffer is valid
	if(!lifo_buf->base)
		return lifo_Null;
	//	buffer is full

	if(lifo_is_full(lifo_buf)== lifo_Full)
		return lifo_Full;
	//	add item
	*(lifo_buf->base) = item;
	//base point to the next address
	lifo_buf->base++;
	//	increment the counter
	lifo_buf->count++;

	return lifo_No_Error ;
}
lifo_status lifo_get(lifo* lifo_buf, unsigned int * item){
	//	buffer is valid
	if(!lifo_buf->base)
		return lifo_Null;

	if(lifo_is_empty(lifo_buf)== lifo_Empty)
		return lifo_Empty;

	lifo_buf->base--;
	*item = *(lifo_buf->base);
	lifo_buf->count--;

	return lifo_No_Error;
}
lifo_status lifo_is_full(lifo* lifo_buf){
	if(!lifo_buf->base)
		return lifo_Null;
	if(lifo_buf->count == lifo_buf->length)
		return lifo_Full;
	return lifo_No_Error;
}
lifo_status lifo_is_empty(lifo* lifo_buf){
	if(!lifo_buf->base)
		return lifo_Null;
	if(lifo_buf->count == 0)
		return lifo_Empty;
	return lifo_No_Error;
}
void lifo_print(lifo* lifo_buf){
	unsigned int * temp;
	unsigned int  i;
	if(lifo_is_empty(lifo_buf)== lifo_Empty)
		printf("stack is empty \n");
	else
		temp = lifo_buf->base;
	for(i=0;i<lifo_buf->count;i++){
		temp--;
		printf("\tprint from stack: %x \n",*temp);

	}
}
