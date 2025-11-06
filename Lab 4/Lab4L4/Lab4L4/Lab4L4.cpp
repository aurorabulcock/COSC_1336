/*Aurora Bulcock
COSC 1336 001
3/7/23
Purpose: To create a summary (receipt) of a purchase 
at a music store (Lab4L4)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define LARGE_DISCOUNT_MINIMUM 100
#define SALES_TAX 5

void main() {
	double totalPurchasePrice;
	char isTeacher;
	//input
	printf("Please enter the total purchase price: ");
	scanf("%lf", &totalPurchasePrice);
	printf("Please enter 'Y' if the purchaser is a teacher: ");
	scanf(" %c", &isTeacher);

	//process and output
	printf("Total Purchase:\t\t\t$%.2f\n", totalPurchasePrice);
	if (isTeacher == 'Y' || isTeacher == 'y') {
		int discount;
		if (totalPurchasePrice >= LARGE_DISCOUNT_MINIMUM)
			discount = 12;
		else
			discount = 10;
		double discountAmount = (discount * .01) * totalPurchasePrice;
		double discountPrice = totalPurchasePrice - discountAmount;
		double tax = discountPrice * (SALES_TAX * .01);
		printf("Teacher's Discount (%d%%):\t%.2f\n",
			discount, discountAmount);
		printf("Discounted total:\t\t%.2f\n", discountPrice);
		printf("Sales Tax (%d%%):\t\t\t%.2f\n", SALES_TAX, tax);
		printf("Total:\t\t\t\t$%.2f\n", discountPrice + tax);
	}
	else {//Non-Teacher Case
		double tax = totalPurchasePrice * (SALES_TAX * .01);
		printf("Sales Tax (%d%%):\t\t\t%.2f\n", SALES_TAX, tax);
		printf("Total:\t\t\t\t$%.2f\n", totalPurchasePrice + tax);
	}
}