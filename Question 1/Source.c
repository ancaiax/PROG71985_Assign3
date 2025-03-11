#include <stdio.h>
#include "MathLibrary.h"

//madisont - prog71985 - assign3, q1

//quick source code test

int main(void) {

	double valueOne = 6.5;
	double valueTwo = 8.23;

	//Value One and Two before squaring both values
	printf("Value One = %lf and Value Two = %lf.\n", valueOne, valueTwo);

	SquareOf(&valueOne, &valueTwo);

	//Value One and Two after squaring both values
	//And setting both to the larger of the two results
	printf("Value One = %lf and Value Two = %lf.\n", valueOne, valueTwo);

	return 0;
}