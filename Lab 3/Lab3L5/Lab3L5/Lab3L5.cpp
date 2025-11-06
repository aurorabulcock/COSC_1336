/*Aurora Bulcock
COSC 1336 001
2/28/23
Purpose: To perform two unrealted calculations in functions (Lab3L5)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//function prototype
int projectPopulationOfGotham(int year);
double calculateSpeedOfSound(double temperature);

int main(void) {
	
	int year;
	double temperature;
	
	//input
	printf("Please enter the year after 1990: ");
	scanf("%d", &year);
	printf("Please enter an air temperature in degrees Fahrenheit: ");
	scanf("%lf", &temperature);

	//process:
	int gothamPopulation = projectPopulationOfGotham(year);
	double speedOfSound = calculateSpeedOfSound(temperature);
	

	//output
	printf("The population of Gotham city in the year %d", year);
	printf(" is estimated to be %d", gothamPopulation);
	printf("\naccording to an estimate from 1990.\n");
	printf("The speed of sound through air that is ");
	printf("%.2f degreees Fahrenheit is %.2f ft/s.\n", 
		temperature, speedOfSound);
}
int projectPopulationOfGotham(int year) {
	year = year - 1990;
	int gothamPopulation = 52966 + 2184 + year;
	return gothamPopulation;
}
double calculateSpeedOfSound(double temperature){
	double speedOfSound = 1086 * sqrt(((5 * temperature) + 297) / 247);
	return speedOfSound;
}