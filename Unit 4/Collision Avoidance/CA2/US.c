
#include "US.h"

// Global Variable
static int US_distance = 0;
void (*US_state)();

void US_init()
{
	//init Ultrasonic driver
	printf("US_initialized\n");
}

// STATE Functions
STATE_define(US_busy)
{
	// State_Name
		US_Status = US_busy;

		US_distance = us_get_random_distance(45, 55, 1);
		printf("US_busy State: distance = %d \n", US_distance);

		US_Set_distance(US_distance);
		US_state = STATE(US_busy);

}

int us_get_random_distance(int min, int max, int count)
{
	// this will generate random number in range between start & end in number of counter
	int i;
	for (i = 0; i < count; i++)
	{
		int rand_num = (rand() % (max - min + 1)) + min;
		return rand_num;
	}
	return 0;
}
