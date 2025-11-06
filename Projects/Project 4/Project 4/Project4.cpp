/*Aurora Bulcock
COSC 1336
4/13/23
Purpose: Write a banking application where a user will enter their current balance and a transaction. 
(Project 4: Bank Application)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//The user will enter the amount to withdraw or deposit and the application will calculate their new balance. 
	//A deposit will be represented by a positive number and a withdrawal will be represented by a negative number, 
	//so do not ask them what kind of transaction they want!  
	
	double currentBalance, transactionAmount;
	
	printf("Please enter your current balance and the amount of your transaction, separated by a space: ");
	scanf("%lf %lf", &currentBalance, &transactionAmount);
	
	//If the transaction causes them to be overdrawn charge a 25.00 overdraft fee.  

	if (transactionAmount > 1) {
		double newBalance = currentBalance + transactionAmount;
		printf("Your previous balance was $%.2f\n", currentBalance);
		printf("You performed a deposit of $%.2f\n", transactionAmount);
		printf("Your new balance is $%.2f", newBalance);
	}
	
	if (transactionAmount < 1) {
		if (-1*transactionAmount>currentBalance) {
			double overdraftTotal = transactionAmount - 25;
			double newBalance = currentBalance + overdraftTotal;
			printf("Your previous balance was $%.2f\n", currentBalance);
			printf("You performed a withdraw of $%.2f\n", transactionAmount);
			printf("You were charged an overdraft fee of $-25.00\n");
			printf("Your new balance is $%.2f", newBalance);
		}
		else {
			double newBalance = currentBalance + transactionAmount;
			printf("Your previous balance was $%.2f\n", currentBalance);
			printf("You performed a withdraw of $%.2f\n", transactionAmount);
			printf("Your new balance is $%.2f", newBalance);

		}
	}

	//Output the following: previous Balance, amount deposited or withdrawn, the overdraft fee if
	//applicable, and the new balance. Do not miss any of these outputs! When outputting the transaction type, include the 
	//type (withdraw or deposit) and amount. No SADITM is necessary!

//Example input (Make your input look EXACTLY like this):
//Please enter your current balance and the amount of your transaction, separated by a space: 100.50 -50.20

//Example output (Make your output look EXACTLY like this):
//Your previous balance was $100.50
//You performed a withdraw of $-50.20
//Your new balance is $50.30

}