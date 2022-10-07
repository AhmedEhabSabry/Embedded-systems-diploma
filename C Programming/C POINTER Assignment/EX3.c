#include <stdio.h>
#include <string.h>

int main(void) {

	int size ;
	printf ("Input the string:");

	char str[100];

	char reverse[100];

	char* ch = str;

	scanf("%s",str);

	size = strlen(str)-1;

	int i;
	for (i = size ; i >= 0 ; i--)
		{
		reverse[size-i] = *(ch+i);
		}
	reverse[size+1]='\0';
	printf("Reverse of string is %s",reverse);
}