/*Aurora Bulcock
COSC 1336
4/13/23
Purpose: To respond to queries about seasons (Lab7L5)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum {winter, spring, summer, fall} Season;

//prototype functions
void displaySeason(Season input);

void main() {
	Season input;
	int count = -1;
	do {
		printf("Please enter an integer representing a season: ");
		scanf("%d", &input);
		displaySeason(input);
		count++;
	} while (input >= winter && input <= fall);
	printf("The total count is %d. \n", count);
}

void displaySeason(Season input) {
	switch (input) {
		case winter:
			printf("The season is winter\n");
			break;
		case summer:
			printf("The season is summer\n");
			break;
		case spring:
			printf("The season is spring\n");
			break;
		case fall:
			printf("The season is fall\n");
			break;
	}
}