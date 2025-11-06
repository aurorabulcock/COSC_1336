/*Aurora Bulcock
COSC 1336
4/4/23
Purpose: To work some more repetition problems (Lab5L3)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int sum = 0;
	for (int i = 100; i <= 200; i++)
		sum += i;
	printf("The total of the numbers between 100 and 200 inclusive ");
	printf("is %d.\n", sum);

	do {
		printf("Please enter an integer (positive only): ");
		scanf("%d", &sum);
	} while (sum <= 0);

	sum = 0;
	int count = 0, age = 0;
	printf("Please enter an age: ");
	scanf("%d", &age);
	while (age >= 0) {
		sum += age;
		count++;
		printf("Please enter an age: ");
		scanf("%d", &age);
	}
	printf("The average age is %.2f", (double)sum / count);
}