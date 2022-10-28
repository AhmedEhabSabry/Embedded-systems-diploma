#ifndef CA1_H_INCLUDED
#define CA1_H_INCLUDED

unsigned int speed,distance,threshold=50;

 enum {
waiting,
driving
}state_id ;

#define State_Define(_state_funct) void ST_##_state_funct()
#define State(StateFunction)  ST_##StateFunction

//prototypes
State_Define(waiting);
State_Define(driving);

void setup();
int generate_random(int ,int ,int);
//pointer to function
extern void (*state)();

#endif //
