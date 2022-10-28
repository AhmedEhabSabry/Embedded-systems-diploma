#ifndef DC_MOTOR_H_INCLUDED
#define DC_MOTOR_H_INCLUDED

#include "state.h"

// Define Status
enum {
	DC_idle,
	DC_busy
}DC_Status;

// Declare Status Functions DC
STATE_define(DC_idle);
STATE_define(DC_busy);

void DC_init();

// STATE Pointer to Function
extern void (*DC_state)();

#endif // DC_MOTOR_H_INCLUDED
