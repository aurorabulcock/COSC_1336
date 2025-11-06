/*Aurora Bulcock
COSC 1336 001
02/23/2023
Purpose: Write an application in C that will 
convert an integer value of meters to inches. (Project 2)*/

#define _CRT_SECURE_NO_WARNINGS
#define METERS_TO_INCHES 39.97
#include <stdio.h>

//prototype function
void convertMetersToInches(int numberOfMeters);

int main(void) {
	
	int numberOfMeters;

	//Prompt with “Please enter the number of meters you wish to convert : “.
	printf("Please enter the number of meters you wish to convert: ");
	
	//Read numberOfMeters.
	scanf("%d", &numberOfMeters);
	
	//Call convertMetersToInches(numberOfMeters)
	convertMetersToInches(numberOfMeters);

	//Output “The number of meters is “ + numberOfMeters + ” meters.”
	printf("The number of meters is: %d", numberOfMeters);

}


	//Function: void convertMetersToInches(int numberOfMeters)

void convertMetersToInches(int numberOfMeters) {	
	
	//Compute double numberOfInches = numberOfMeters * METERS_TO_INCHES
	double numberOfInches = numberOfMeters * METERS_TO_INCHES;

	//Output double numberOfInches.
	printf("The number of inches is: %.2f\n", numberOfInches);
}