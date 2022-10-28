#include "Collision_avoidance.h"
#include "DC_motor.h"
#include "US.h"

void setup(void)
{
	// init all the drivers
	US_init();
	DC_init();

	CA_state = STATE(CA_waiting);

	US_state = STATE(US_busy);
	DC_state = STATE(DC_idle);
}

int main(void)
{
	volatile int i;
	setup();

	while(1)
	{
		// Call state for each block
		US_state();
		CA_state();
		DC_state();

		// Delay
		for(i = 0 ; i <= 50000 ; i++);
	}
	return 0;
}
