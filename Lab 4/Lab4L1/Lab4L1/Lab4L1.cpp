/*Aurora Bulcock
COSC 1336 001
2/28/23
Purpose: To determine the cost of copies for a copy center (Lab4L1)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PRICE_UNDER_100 .05
#define PRICE_OVER_100 .03

//function prototypes
int getNumCopies();

void main() {
	
	double price;
	
	//input
	int copies = getNumCopies();

	//process
	if (copies <= 100)
		price = copies * PRICE_UNDER_100;
	else
		price = (100 * PRICE_UNDER_100) + (copies - 100) * PRICE_OVER_100;

	//output
	printf("Your total number of copies is: %d.\n", copies);
	printf("Your total cost is: $%.2f.\n\n", price);
}
int getNumCopies() {
	int homey;
	printf("Please enter the number of copies you wish to make: ");
	scanf("%d", &homey);
	return homey;

}