/*Aurora Bulcock
COSC 1336 001
01/31/2023
Purpose: To figure out how long it will take to mow a yard (Lab2L3)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//input
	double yardWidth, yardLength, houseWidth, houseLength, rateOfMowing;
	printf("Please enter the width of your yard in square feet: ");
	scanf("%lf", &yardWidth);
	printf("Please enter the length of your yard in square feet: ");
	scanf("%lf", &yardLength);
	printf("Please enter the width of your house in square feet: ");
	scanf("%lf", &houseWidth);
	printf("Please enter the length of your house in square feet: ");
	scanf("%lf", &houseLength);
	printf("Please enter the rate at which you mow in square feet per minute: ");
	scanf("%lf", &rateOfMowing);
	//processing
	double rawAreaOfYard = yardWidth * yardLength;
	double areaOfHouse = houseLength * houseWidth;
	double areaOfYard = rawAreaOfYard - areaOfHouse;
	double mowingTime = areaOfYard / rateOfMowing;
	//output
	printf("It will take %.2f minutes to mow your yard of %.2f square feet.", mowingTime, areaOfYard);
}