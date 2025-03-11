#include <stdio.h>
#include "ArrayLibrary.h"

//madisont - prog71985 - assign3, q2

//quick source code test

int main(void) {

	float testArray[] = { 1.45, 6.3, 5.43, 8.32 };
	int sizeOfArray = sizeof(testArray) / sizeof(testArray[0]);

	//printf("sizeOfArray: %d\n", sizeOfArray);

	float result = ArrayDifference(testArray, sizeOfArray);

	printf("Difference: %0.4f.\n", result);

	return 0;
}