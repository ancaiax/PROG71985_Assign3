#include "SumOfArraysLibrary.h"

//madisont - prog71985 - assign3, q3 - implementation

//Write a function that sets each element in an array to the sum of the 
//corresponding elements in two other arrays. This function should be named
//SumTwoArraysIntoThird and the three arrays should be sent as function parameters.
//Prepare a set of unit tests written. Be sure to include all the tests you performed 
//to demonstrate that this function works as specified.

//Write SumTwoArraysIntoThird function
void SumTwoArraysIntoThird(int arrayOne[], int arrayTwo[], int arraySum[], int sizeOfArray) {

	for (int positionCounter = 0; positionCounter < sizeOfArray; positionCounter++)
	{
		arraySum[positionCounter] = arrayOne[positionCounter] + arrayTwo[positionCounter];
	}

}

//Bool function created for test assertion
bool arraysEqual(int arrayOne[], int arrayTwo[], int sizeOfArray) {
    for (int index = 0; index < sizeOfArray; index++) {
        if (arrayOne[index] != arrayTwo[index]) {
            return false;
        }
    }
    return true;
}