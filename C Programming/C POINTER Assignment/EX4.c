#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num ;
	printf ("Input the number of elements to store in the array (max 15):");

	scanf("%d",&num);
	int arr[15];
	int reverse[15];
	int* ptr= arr;
	int i;
	for (i = 0 ; i < num ; i++)
		{
		printf("element %d :",i+1);

		scanf("%d",(ptr+i));
		}

	printf("\nThe elements of array in reverse order are :\n");
	for (i = num-1 ; i >= 0 ; i--)
		{
		reverse[num-1-i] = *(ptr+i);
		printf("element - %d :%d \n",i+1,reverse[num-1-i]);
		}
}

