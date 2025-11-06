/*Aurora Bulcock
COSC 1336 001
02/17/2023
Purpose: Plan a program which will prompt the user for 
two points and calculate and print the midpoint and slope 
of a line segment as a fraction.(Lab3L3)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//prototype functions
void printMidpoint(double x1, double y1, double x2, double y2);
void printSlope(double x1, double y1, double x2, double y2);


void main() {

	double x1, y1, x2, y2;

	// Prompt with “Please enter a value for x1: ”
	printf("Please enter a x1 value: ");

	// Read x1.
	scanf("%lf", &x1);

	// Prompt with “Please enter a value for y1: ”
	printf("Please enter a y1 value: ");

	// Read y1.
	scanf("%lf", &y1);

	// Prompt with “Please enter a value for x2: ”
	printf("Please enter a x2 value: ");

	// Read x2.
	scanf("%lf", &x2);

	// Prompt with “Please enter a value for y2: ”
	printf("Please enter a y2 value: ");

	// Read y2.
	scanf("%lf", &y2);

	// Call printMidpoint(x1, y1, x2, y2).
	printMidpoint(x1, y1, x2, y2);
		
	// Call printSlope(x1, y1, x2, y2).
	printSlope(x1, y1, x2, y2);

}


	// Function: printMidpoint(double x1, double y1, double x2, double y2)
void printMidpoint(double x1, double y1, double x2, double y2) {

	// Compute midpointX = (x1 + x2) / 2.
	double midpointX = ((x1 + x2) / 2);

	// Compute midpointY = (y1 + y2) / 2.
	double midpointY = ((y1 + y2) / 2);
	
	// Output “The midpoint is(“ + midpoint + ”, “ + midpoint + ”).”.
	printf("The midpoint is (“%.2f”, “%.2f”)", 
		midpointX, midpointY);
}


	// Function : printSlope(double x1, double y1, double x2, double y2)
void printSlope(double x1, double y1, double x2, double y2) {

	// Compute slopeNumerator = y2 - y1.
	double slopeNumerator = (y2 - y1);

	// Compute slopeDenominator = x2 - x1.
	double slopeDenominator = (x2 - x1);

	// Output “The slope of your line is(“ + slopeNumerator + ” 
	// / “ + slopeDenominator + ”).”.
	printf("The slope of the line is (“%.2f”, “%.f”)", 
		slopeNumerator, slopeDenominator);

}


