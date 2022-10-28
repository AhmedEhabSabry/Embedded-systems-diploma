#include "state.h"
#include "DC_motor.h"

// Global Variable
static int DC_speed = 0;

// STATE Pointer to function
void (*DC_state)();

void DC_init()
{
	printf("DC_motor is initialized\n");
}

void DC_motor_speed(int speed)
{
	DC_speed = speed;
	DC_state = STATE(DC_busy);
	printf("CA --------- Speed = %d -------> DC \n", DC_speed);
}

// STATE Functions
STATE_define(DC_idle)
{

	DC_Status = DC_idle;

	printf("CA_idle State: speed = %d\n", DC_speed);

}

STATE_define(DC_busy)
{

	DC_Status = DC_busy;

	printf("DC_busy State: speed = %d\n", DC_speed);
	DC_state = STATE(DC_idle);

}
