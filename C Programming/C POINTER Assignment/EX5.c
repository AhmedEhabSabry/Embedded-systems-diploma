#include <stdio.h>
#include <stdlib.h>

struct SEmployee{
	char* Name;
	int ID;
};
int main(void) {
	struct SEmployee E1 = {"Alex",1002};
	struct SEmployee* arr[10] = {&E1};
	struct SEmployee** ptr = arr;

	printf("Employee name: %s \n Employee ID: %d",(ptr[0]->Name),(ptr[0]->ID));
}
