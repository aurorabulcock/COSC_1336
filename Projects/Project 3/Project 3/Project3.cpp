/*Aurora Bulcock
COSC 1336 001
3/10/23
Purpose: Allow a user to multiply and divide pairs of integer fractions and
provide the resulting fraction and the decimal representation as a double to 2 decimal places. (Project3: Fractions)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//function prototypes
double fractionToDecimal(int numerator, int denominator);
void outputFraction(int numerator, int denominator);

void main() {
	//inputs
	int numerator1, denominator1, numerator2, denominator2;

	//Prompt with “Please enter numerator 1: ”. 
		printf("Please enter numerator 1: ");

	//Read numerator1.
		scanf("%d", &numerator1);
	
	//Prompt with “Please enter denominator 1: ”.
		printf("Please enter denominator 1 (Cannot be zero): ");
	
	//Read denominator1.
		scanf("%d", &denominator1);
	
	//Prompt with “Please enter numerator 2 : ”.
		printf("Please enter numerator 2: ");
	
	//Read numerator2.
		scanf("%d", &numerator2);
	
	//Prompt with “Please enter denominator 2 : ”.
		printf("Please enter denominator 2 (Cannot be zero): ");
	
	//Read denominator2.
		scanf("%d", &denominator2);


	//Call outputFraction(numerator1, denominator1).
		outputFraction(numerator1, denominator1);

	//Call outputFraction(numerator2, denominator2).
		printf(" + ");
		outputFraction(numerator2, denominator2);

	//Compute numeratorProduct = numerator1 * numerator2.
		int numeratorSum = (numerator1*denominator2) + (numerator2*denominator1);

	//Compute denominatorProduct = denominator1 * denominator2.
		int denominatorSum = (denominator1 * denominator2);

	//Call outputFraction(numeratorProduct, denominatorProduct).
		printf(": The resulting fraction is ");
		outputFraction(numeratorSum, denominatorSum);
		printf(".\n");

	//Compute decimalProduct = Call fractionToDecimal(numeratorProduct, denominatorProduct).
		double decimalSum = fractionToDecimal(numeratorSum, denominatorSum);

	//Output “ is “ + decimalProduct.
		printf("The decimal representation of "); 
		outputFraction(numeratorSum, denominatorSum);
		printf(" is %.2f\n\n", decimalSum);
	

	
	//Call outputFraction(numerator1, denominator1).
		outputFraction(numerator1, denominator1);

	//Call outputFraction(numerator2, denominator2).
		printf(" - ");
		outputFraction(numerator2, denominator2);

	//Compute numeratorQuotient = numerator1 * denominator2.
		int numeratorDifference = (numerator1 * denominator2) - (numerator2 * denominator1);

	//Compute denominatorQuotient = denominator1 * numerator2.
		int denominatorDifference = (denominator1 * denominator2);

	//Call outputFraction(numeratorQuotient, denominatorQuotient).
		printf(": The resulting fraction is ");
		outputFraction(numeratorDifference, denominatorDifference);
		printf(".\n");

	//Compute decimalQuotient = Call fractionToDecimal(numeratorQuotient, denominatorQuotient).
		double decimalDifference = fractionToDecimal(numeratorDifference, denominatorDifference);

	//Output “ is “ + decimalQuotient.
		printf("The decimal representation of ");
		outputFraction(numeratorDifference, denominatorDifference);
		printf(" is %.2f\n", decimalDifference);

}

//fractionToDecimal(int numerator, int denominator). 
double fractionToDecimal(int numerator, int denominator) {
	//Compute decimalResult = (double)numerator / denominator.
	double decimalResult = (double)numerator / denominator;

	//Return decimalResult.
	return decimalResult;

}


//Function: outputFraction(int numerator, int denominator). 
void outputFraction(int numerator, int denominator) {
	//Output numerator + ” / ” + denominator.
	printf("%d/%d", numerator, denominator);
}
