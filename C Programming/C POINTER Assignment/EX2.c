
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char alpha ='A';

	char* ch=&alpha;
	
	printf("The alphabets are :\n");
	int i = 0;
	while(i<=25)
	{
		printf("%c  ",(*ch)++);
		i++;
	}


}
