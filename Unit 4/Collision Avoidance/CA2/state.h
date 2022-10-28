#ifndef STATE_H_INCLUDED
#define STATE_H_INCLUDED

#include "stdio.h"
#include "stdlib.h"

// Automatic STATE Function generated
#define STATE_define(stat) void ST_##stat()
#define STATE(stat) ST_##stat

//States Connections
void US_Set_distance(int distance);
void DC_motor_speed(int speed);

extern void (*CA_state)();


#endif // STATE_H_INCLUDED
