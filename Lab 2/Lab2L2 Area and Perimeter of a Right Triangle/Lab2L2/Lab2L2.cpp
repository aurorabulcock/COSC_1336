/*Aurora Bulcock
COSC 1336 001
01/31/2023
Purpose: To get information about a right triangle (Lab2L2)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() {
	double a, b;

	//Prompt with “Please enter a value for a: “
	printf("Please enter a value for a: ");
	//Read a.
	scanf("%lf", &a);
	//Prompt with “Please enter a value for b: “
	printf("Please enter a value for b: ");
	//Read b.
	scanf("%lf", &b);

	//Calculate c = sqrt(a * a + b * b)
	double c = sqrt(a * a + b * b);
	//Calculate area = 0.5 * a * b
	double area = 0.5 * a * b;
	//Calculate perimeter = a + b + c
	double perimeter = a + b + c;
	
	//Output “The length of your sides are a and b, so the length of your hypotenuse is c.”
	printf("The length of your sides are %.3f and %.3f", a, b);
	printf(" so the length of your hypotenuse is: % .3f.\n", c);
	//Output “The area of your triangle is area.”
	printf("The area of your triangle is: %.3f.\n", area);
	//Output “The perimeter of your triangle is perimeter.”
	printf("The perimeter of your triangle is: %.3f", perimeter);
}