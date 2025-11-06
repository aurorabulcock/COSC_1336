/*Aurora Bulcock
COSC 1336 001
02/17/2023
Purpose: To draw some ASCII Houses (Lab3L1)*/

#include <stdio.h>

//function prototypes
void printTriangle();
void printRectangle();
void printHouse();

void main() {
	printTriangle();
	printRectangle();
	printf("\n\n\n");
	printTriangle();
	printRectangle();
	printf("\n\n\n");
	printHouse();
}
void printRectangle(void) {
	printf("*****\n");
	printf("*   *\n");
	printf("*   *\n");
	printf("*****\n");
}

void printTriangle(void) {
	printf("  *\n");
	printf(" * *\n");
	printf("*****\n");
}

void printHouse(void) {
	printTriangle();
	printRectangle();
}