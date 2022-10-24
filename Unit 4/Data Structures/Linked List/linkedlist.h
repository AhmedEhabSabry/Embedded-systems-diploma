#ifndef SCHOOL_H_
#define SCHOOL_H_

#include "stdio.h"

#include "stdlib.h"
#include "string.h"
#include "conio.h"


struct Sdata{
	int id;
	char name[30];
	int age;
};
struct Sstudent{
	struct Sdata student;
	struct Sstudent* pNextStudent;
};


void addStudent();
void deleteStudent();
void printAllStudent();
void deleteAllStudent();
void nodesnumber();
#endif
