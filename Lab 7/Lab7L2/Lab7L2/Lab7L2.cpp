/*Aurora Bulcock
COSC 1336
4/12/2023
Purpose: To practice using arrays by creating a program that records car sales (Lab7L2)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM_SALESPEOPLE 6

double getTotal(const double sales[]);
void printPercentage(const double sales[], double total);

void main() {
	//main:

	//make an array of doubles named sales of size 4
	double sales[NUM_SALESPEOPLE];
	
	//make a double named total and set it equal to 0
	double total = 0;
	
	//loop through sales and
	for (int i = 0; i < NUM_SALESPEOPLE; i++) {
		//prompt the user to enter sales for person 1 - 4 (formatted nicely)
		printf("Please enter the sales for Salesperson %d: ", i+1);
		//read in the sales for the person and store it in sales
		scanf("%lf", &sales[i]);
	}
	//call getTotal(sales) and set the result in total
	total= getTotal(sales);
	
	//call printPercentage(sales, total)
	printPercentage(sales, total);
	
	//Get the above working completely, then modify the entire program 
	//to take an array of size 6. In the comments, provide information 
	//about what changes you had to make
}

double getTotal(const double sales[]) {
	//getTotal:
	
	//create a local total called total
	double total=0;

	//loop through sales and add each member to total
	for (int i = 0; i < NUM_SALESPEOPLE; i++) {
		total += sales[i];
	}
	//return total
	return total;
}


void printPercentage(const double sales[], double total) {
	//printPercentage:

	//print out "Sales Person\t\tPercentage of Sales:\n"
	printf("Sales Person\t\tPercentage of Sales:\n");

	//loop through the input array and for each element :
	for (int i = 0; i < NUM_SALESPEOPLE; i++)
		//print out a row header : "Sales Person [1-4]: "
		//Then, on the same line, put the appropriate number of tabs to make a nicely formatted table
		//Then, on the same line, output the current sales person's sales/total to get the percentage
		//FORMATTED (use %% to print out a percent sign).
		//Then, on the same line, output a new line
		printf("Salesperson [%d]:\t %.3lf%%\n", i+1, sales[i]/total*100);
		
		//at the end of the loop, print out "\nTotal Sales for Event:"
		//then on same line, print out the appropriate number of tabs to make this output line up with the rest of the table
		//then, on the same line, output the total FORMATTED.
		printf("\nTotal Sales for Event:\t $%.2lf", total);
	
}