#ifndef COLLISION_AVOIDANCE_H_INCLUDED
#define COLLISION_AVOIDANCE_H_INCLUDED

#include "state.h"

// Define Status
enum {
	CA_waiting,
	CA_driving
}CA_Status;

// Declare Status Functions CA
STATE_define(CA_waiting);
STATE_define(CA_driving);

extern void (*CA_state)();

#endif // COLLISION_AVOIDANCE_H_INCLUDED
