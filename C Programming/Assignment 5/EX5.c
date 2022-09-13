#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Area(r) (M_PI*r*r)

int main(void) {
	float r;
	printf("Enter the circle radius: ");
	scanf("%f", &r);
	printf("Area= %f", Area(r));
	return 1;
}