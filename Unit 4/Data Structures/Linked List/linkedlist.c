#include "linkedlist.h"

Sstudent * head=NULL;

void addStudent(){
    struct Sstudent *newstudent=(struct Sstudent*)malloc(sizeof(struct Sstudent));
    newstudent->pNextStudent=NULL;
    int age,id;
    char arr[30];
    printf("Enter the id , age and the name of the student \n")
    scanf("%d%d",&id,&age);
    gets(arr);
    newstudent->student.id=id;
    newstudent->student.age=age;
    strcpy(newstudent->student.name,arr);
    if(!head){
        head=newstudent;
        return ;
    }
    struct Sstudent*SearchStudent=head;
    while(SearchStudent->pNextStudent){
        SearchStudent=SearchStudent->pNextStudent;
    }
    SearchStudent->pNextStudent=newstudent;

}
void printAllStudent(){
   Sstudent *head1=head;
while(head1){

    printf(" Student ID : %d \n Student Name : %s \n Student Age %d",head1->student.id,head1->student.name,head1->student.age);
    head1=head1->pNextStudent;
}


}
void deleteStudent(){
int ID;
printf("Please Enter The ID of the student \n");
scanf("%d",&ID);
Sstudent *head1=head;
Sstudent *pre=NULL;
while(head1){
    if(head1&&head1->student.id==ID&&!pre){
      head1=NULL;
      return ;
    }

    if(head1&&head1->student.id==ID&&pre){
      pre->pNextStudent=head1->pNextStudent;
      return ;
    }
    pre=head1;
    head1=head1->pNextStudent;
}

}
void deleteAllStudent(){
	// set pointer refer to first student
	struct Sstudent* pCurrentStudent = head;
	// if database is empty
	if(!head ){
		printf("not found any student in database to delete\n");
	}
	// if database contain student delete then loop until reach to null
	else{
		while(pCurrentStudent){
			// set pointer temp refer to current student
			struct Sstudent* pTemp = pCurrentStudent;
			// refer to next student then delete temp student
			pCurrentStudent=pCurrentStudent->pNextStudent;
			free(pTemp);
		}
		// set first student to null ( database is free )
		head = NULL;
	}
}
void nodesnumber()
{
	struct Sstudent* pnodesnumber = head;
	int count = 1;
	while(pnodesnumber->pNextStudent){
		count++;
		pnodesnumber = pnodesnumber->pNextStudent;
	}
	printf(" length of student database equal : %d node\n",count);
}
