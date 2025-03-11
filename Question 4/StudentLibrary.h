#pragma once
#define MAXSIZE 20

//madisont - prog71985 - assign3, q4 - interface

//Student library

#ifndef STUDENT_LIBRARY_H
#define STUDENT_LIBRARY_H

//I named it NAME for reusability and not STUDENTNAME
//because that only applies to the concept of students
typedef struct name {
	char firstName[MAXSIZE];
	char middleName[MAXSIZE];
	char lastName[MAXSIZE];
}NAME;

typedef struct student {
	int studentNumber;
	NAME studentName;
}STUDENT;

STUDENT CreateStudent(int number, char* firstName, char* middleName, char* lastName);

void PrintStudents(STUDENT s[], int size);

#endif //STUDENT_LIBRARY_H