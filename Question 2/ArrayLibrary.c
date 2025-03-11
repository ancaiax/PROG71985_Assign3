#include "ArrayLibrary.h"

//madisont - prog71985 - assign3, q2 - implementation

//Write a function that returns the difference of the largest and the
//smallest elements of an array of floats. Choose an appropriate name
//for your function. Prepare a set of unit tests.
//Be sure to test (and include) all the edge cases you can think of

//Write ArrayDifference function
float ArrayDifference(float arrayOfFloats[], int sizeOfArray) {

	float min = arrayOfFloats[0];
	float max = arrayOfFloats[0];

	//Search array for min and max values
	for (int positionCounter = 0; positionCounter < sizeOfArray; positionCounter++)
	{
		if (arrayOfFloats[positionCounter] < min)
		{
			min = arrayOfFloats[positionCounter];
		}
		if (arrayOfFloats[positionCounter] > max)
		{
			max = arrayOfFloats[positionCounter];
		}
	}

	//Get difference of smallest and largest values
	float difference = max - min;

	return difference;
}