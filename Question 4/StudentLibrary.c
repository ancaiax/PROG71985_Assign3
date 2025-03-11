#define _CRT_SECURE_NO_WARNINGS
#define MAXSIZE 20
#include <stdio.h>
#include <string.h>
#include "StudentLibrary.h"

//madisont - prog71985 - assign3, q4 - implementation

//1. Write a component (a pair of.c and .h files) that defines a structure
//template with two member attributes according to the following criteria:
//• The first member is a student number as a single fixed length numeric field
//with a max length of 10 digits
//• The second member is a structure with three members:
//- first member is “first name”
//– second member is “middle name”
//– third member is “last name”
//2. Write and test a program that creates and initializes an array of 4 of
//these structures (make up pretend names/numbers)
//Have at least 2 students with middle names and at least 1 without one.
//3. Write a single function that accepts an array of these structures as a
//parameter and prints the array data in the following format:
//2001041234 – LastName, FirstName MiddleInitial.

//Write CreateStudent function
STUDENT CreateStudent(int number, char* firstName, char* middleName, char* lastName) {
	STUDENT s;

	s.studentNumber = number;
	strncpy(s.studentName.firstName, firstName, MAXSIZE);
	strncpy(s.studentName.middleName, middleName, MAXSIZE);
	strncpy(s.studentName.lastName, lastName, MAXSIZE);

	return s;
}

//Write PrintStudents function
void PrintStudents(STUDENT s[], int size) {

	for (int index = 0; index < size; index++)
	{
		if (s[index].studentName.middleName[0] == '\0')
		{
			//If there isn't a middle name then...
			printf("%d - %s, %s\n", s[index].studentNumber, s[index].studentName.lastName,
				s[index].studentName.firstName);
		}
		else {
			//If there is a middle name then...
			printf("%d - %s, %s %c.\n", s[index].studentNumber, s[index].studentName.lastName,
				s[index].studentName.firstName, s[index].studentName.middleName[0]);
		}
	}
}