

#include <stdio.h>
#include <stdlib.h>


struct Sstudent {
	char name[50];
	int roll;
	float marks;
};

struct Sstudent read_data() {
	struct Sstudent s1;
	printf("Enter the information of stduents ");

	printf("Enter the name ");
	scanf("%s", s1.name);
	printf("Enter roll number  ");
	scanf("%d", &s1.roll);
	printf("Enter marks ");
	scanf("%f", &s1.marks);
	return s1;
}
void print_data(struct Sstudent s1) {
	printf("Displaying informations \n");

	printf("name %s \n", s1.name);
	printf("roll number  %d \n", s1.roll);
	printf("marks %.2f \n", s1.marks);
}
int main() {
	struct Sstudent s1[10];
	int i=10;
	while(i--){
	 	s1[i] = read_data();
	print_data(s1[i]);   
	}
}
