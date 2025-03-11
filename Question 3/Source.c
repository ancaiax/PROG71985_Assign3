#include <stdio.h>
#include "SumOfArraysLibrary.h"

//madisont - prog71985 - assign3, q3

//quick source code test

int main(void) {

	int arrayOne[] = { 1,2,3,4,5 };
	int arrayTwo[] = { 6,7,8,9,10 };
	int arraySum[5];
	
	int sizeOfArray = sizeof(arrayOne) / sizeof(arrayOne[0]);

	SumTwoArraysIntoThird(arrayOne, arrayTwo, arraySum, sizeOfArray);

	for (int positionCounter = 0; positionCounter < sizeOfArray; positionCounter++)
	{
		printf("%d\n", arraySum[positionCounter]);
	}

	return 0;
}