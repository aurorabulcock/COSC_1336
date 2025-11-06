/* Aurora Bulcock
COSC 1336
4/4/23
Purpose: To find the smallest, largest, and average of
a list of numbers (Lab5L4)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int listSize;
	double largest = -99999999, smallest = 99999999, sum = 0;
	printf("Please enter the size of the list of numbers: ");
	scanf("%d", &listSize);
	for (int i = 0; i < listSize; i++) {
		double dataValue;
		printf("Please enter a number: ");
		scanf("%lf", &dataValue);
		if (dataValue > largest)
			largest = dataValue;
		if (dataValue < smallest)
			smallest = dataValue;
		sum += dataValue;
	}
	printf("The largest number you entered was %.2f.\n", largest);
	printf("The smallest number you entered was %.2f.\n", smallest);
	printf("The average of the numbers you entered was %.2f.\n", sum / listSize);
}