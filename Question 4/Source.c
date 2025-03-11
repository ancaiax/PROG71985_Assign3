#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "StudentLibrary.h"

//madisont - prog71985 - assign3, q4

//quick source code test

int main(void) {

	STUDENT studentOne = CreateStudent(2002016103, "Madison", "Reese", "Tadros");
	STUDENT studentTwo = CreateStudent(1988121402, "Claire", "Elizabeth", "Terzich");
	STUDENT studentThree = CreateStudent(1967048096, "Helen","", "Masaroon");
	STUDENT studentFour = CreateStudent(2002025627, "Xavier", "Curtis", "Avery");
	
	STUDENT arrayOfStudents[] = { studentOne,studentTwo,studentThree,studentFour };

	int sizeOfArray = sizeof(arrayOfStudents) / sizeof(arrayOfStudents[0]);

	PrintStudents(arrayOfStudents, sizeOfArray);

	return 0;
}