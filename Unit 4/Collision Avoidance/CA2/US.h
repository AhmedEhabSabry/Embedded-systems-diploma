#ifndef US_H_INCLUDED
#define US_H_INCLUDED

#include "state.h"

// Define Status
enum {
	US_busy
}US_Status;

// Declare Status Functions US
STATE_define(US_busy);

// STATE Pointer to Function
extern void (*US_state)();

void US_init();
int us_get_random_distance(int,int,int);



#endif // US_H_INCLUDED
