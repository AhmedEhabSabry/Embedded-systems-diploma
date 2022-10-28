#include "Collision_avoidance.h"

static int CA_speed = 0;
static int CA_distance = 0;
static int CA_threshold = 50;

// STATE Pointer to function
void (*CA_state)();

void US_Set_distance(int distance)
{
	CA_distance = distance;
	(CA_distance <= CA_threshold) ? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving));
	printf("US --------- distance = %d -------> CA \n", CA_distance);

}

// STATE Functions
STATE_define(CA_waiting)
{
	// State_Name
	CA_Status = CA_waiting;
	printf("CA_	wating State: distance = %d, speed = %d\n", CA_distance, CA_speed);

	// State_Action
	CA_speed = 0;
	DC_motor_speed(CA_speed);

}

STATE_define(CA_driving)
{
	// State_Name
	CA_Status = CA_driving;
	printf("CA_driving State: distance = %d, speed = %d\n", CA_distance, CA_speed);

	// State_Action
	CA_speed = 30;
	DC_motor_speed(CA_speed);

}
