#include "ca1.h"

//Function Definition
void (*state)();
State_Define(waiting)
{
    //State_ACtion
    state_id = waiting;
    speed=0;
    distance =generate_random(45,55,1);

//-------------------
//check event
     printf("driving state : distance =%d  speed=%d \n",distance,speed);
    (distance<=threshold)? (state=State(waiting)) : (state=State(driving));



}


State_Define(driving)
{
    //State_ACtion
    state_id=driving;
    speed=30;
    distance =generate_random(45,55,1);
    //-------------------
    //check event

    (distance<=threshold)?(state=State(waiting)):(state=State(driving));

    printf("driving state : distance =%d  speed=%d \n",distance,speed);

}

void setup()
{   printf("Setup\n");
    state=State(waiting);
}
int generate_random(int min,int max,int count)
{
    	int i;
	for (i = 0; i < count; i++)
	{
		int rand_num = (rand() % (max - min + 1)) + min;
		return rand_num;
	}
	return 0;
}
