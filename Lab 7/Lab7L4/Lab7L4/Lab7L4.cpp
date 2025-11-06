/*Aurora Bulcock
COSC 1336
4/13/23
Purpose: To store and display sales figures for multiple months and 
multiple employees (Lab7L4)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_SALESPEOPLE 4
#define MONTHS 3

//function prototypes
double getSales(double sales[NUM_SALESPEOPLE][MONTHS]);
void printSales(double sales[NUM_SALESPEOPLE][MONTHS]);

void main() {
	double sales[NUM_SALESPEOPLE][MONTHS];

	double total = getSales(sales);
	printSales(sales);
	printf("\nTotal Sales for Event:  $%.2f\n\n", total);
}

double getSales(double sales[NUM_SALESPEOPLE][MONTHS]) {
	double total = 0;
	for (int person = 0; person < NUM_SALESPEOPLE; person++) {
		for (int month = 0; month < MONTHS; month++) {
			printf("Please enter the sales for sales person ");
			printf("%d month %d: ", person + 1, month + 1);
			scanf("%lf", &sales[person][month]);
			total += sales[person][month];
		}
	}
	return total;
}



void printSales(double sales[NUM_SALESPEOPLE][MONTHS]) {
	double subtotal = 0;
	printf("\n\n\n");
	for (int person = 0; person < NUM_SALESPEOPLE; person++) {
		printf("Sales Person %d\t", person + 1);
		for (int month = 0; month < MONTHS; month++) {
			printf("%.2f\t", sales[person][month]);
			subtotal += sales[person][month];
		}
		printf("Total Sales: $%.2f\n", subtotal);
		subtotal = 0;
	}
}
