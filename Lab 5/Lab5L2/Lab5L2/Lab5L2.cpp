/*Aurora Bulcock
COSC 1336 001
03/28/2023
Purpose: Build a fraction calculator (Lab5L2)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//function prototypes
int getNumerator();
int getDenominator();
void outputProduct(int numerator1, 
	int denominator1, int numerator2, int denominator2);
int multiply(int item1, int item2);
void printDecimal(int numerator, int denominator);
void outputQuotient(int numerator1, int denominator1,
	int numerator2, int denominator2);
void printExitMessage();
void outputSum(int numerator1, int denominator1, 
	int numerator2, int denominator2);
void outputDifference(int numerator1, int denominator1, 
	int numerator2, int denominator2);
int add(int item1, int item2);


void main() {

	int response;
	printf("Please enter 1 for mutiply, 2 for divide, ");
	printf("3 for addition, 4 for subtraction, or 5 for exit : ");
	scanf("%d", &response);
	while (response != 5) {
		int numerator1 = getNumerator();
		int denominator1 = getDenominator();
		int numerator2 = getNumerator();
		int denominator2 = getDenominator();

		switch (response) {
		case 1: //multiply
			outputProduct(numerator1, denominator1, numerator2, denominator2);
			break;
		case 2: //divide
			outputQuotient(numerator1, denominator1, numerator2, denominator2);
			break;
		case 3: //add
			outputSum(numerator1, denominator1, numerator2, denominator2);
			break;
		case 4: //subtract
			outputDifference(numerator1, denominator1, numerator2, denominator2);
			break;
		default: //invalid input
			printf("Please enter 1, 2, 3, 4, or 5!!!\n");
			break;
		}//end of switch

		//loop update
		printf("Please enter 1 for mutiply, 2 for divide, ");
		printf("3 for addition, 4 for subtraction, or 5 for exit : ");
		scanf("%d", &response);
	}//end of while loop
	printExitMessage();

}//end of main

		
int getNumerator() {
	int numerator;
	printf("Please enter the numerator (any integer): ");
	scanf("%d", &numerator);
	return numerator;
}//end of getNumerator
		
int getDenominator() {
	int denominator;
	printf("Please enter the denominator (positive integer only): ");
	scanf("%d", &denominator);
	return denominator;
}//end of getDenominator

int multiply(int item1, int item2) {
	return item1 * item2;
}//end of multiply	

int add(int item1, int item2) {
	return item1 + item2;
}// end of add
		
void printDecimal(int numerator, int denominator) {
	double decimalValue = (double)numerator / denominator;
	printf("The decimal representation of %d/%d is %.2f.\n", 
		numerator, denominator, decimalValue);
}//end of printDecimal

void outputProduct(int numerator1,
	int denominator1, int numerator2, int denominator2) {
	int numeratorProduct = multiply(numerator1, numerator2);
	int denominatorProduct = multiply(denominator1, denominator2);
	printf("%d/%d * %d/%d. The resulting fraction is %d/%d.\n", numerator1,
		denominator1, numerator2, denominator2, numeratorProduct, denominatorProduct);
	printDecimal(numeratorProduct, denominatorProduct);
}//end of outputProduct

void outputQuotient(int numerator1, 
	int denominator1, int numerator2, int denominator2) {
	int numeratorQuotient = multiply(numerator1, denominator2);
	int denominatorQuotient = multiply(numerator2, denominator1);
		printf("%d/%d / %d/%d. The resulting fraction is %d/%d.\n", numerator1,
			denominator1, numerator2, denominator2, numeratorQuotient, denominatorQuotient);
		printDecimal(numeratorQuotient, denominatorQuotient);
}//end of outputQuotient

void outputSum(int numerator1, int denominator1,
	int numerator2, int denominator2) {
	int numeratorSum = add(multiply(numerator1, denominator2), 
		multiply(denominator1, numerator2));
	int denominatorSum = multiply(denominator1, denominator2);
	printf("%d/%d + %d/%d. The resulting fraction is %d/%d.\n", numerator1,
		denominator1, numerator2, denominator2, numeratorSum, denominatorSum);
	printDecimal(numeratorSum, denominatorSum);
}//end of outputSum

void outputDifference(int numerator1, int denominator1,
	int numerator2, int denominator2) {
		int numeratorDifference = add(multiply(numerator1, denominator2),
			-multiply(denominator1, numerator2));
		int denominatorDifference = multiply(denominator1, denominator2);
		printf("%d/%d - %d/%d. The resulting fraction is %d/%d.\n", numerator1,
			denominator1, numerator2, denominator2, numeratorDifference, denominatorDifference);
		printDecimal(numeratorDifference, denominatorDifference);
}//end of outputDifference

void printExitMessage() {
	printf("Goodbye!\n");
}//end of printExitMessage