/*Aurora Bulcock
COSC 1336 001
3/21/23
Purpose: To learn about loops (lab5L1)*/

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main() {
		//declare ints named sum and age and initialize sum to 0
		int sum = 0, age;

		//Prompt with "Enter student ages or -1 to stop: "
		printf("Enter student ages or -1 to stop: ");

		//set age equal to the next integer from the keyboard
		scanf("%d", &age);

		//start a while loop with the condition that age!=-1
		while (age!=-1) {

			//in while - accumulate the sum of ages in sum
			sum += age;

			//in while - prompt again with "Enter student ages or -1 to stop: "
			printf("Enter student ages or -1 to stop: ");

			//in while - again, set age equal the next integer from the keyboard
			scanf("%d", &age);

		}

		//print out "The sum of the student ages is: (sum).\n"+sum
		printf("The sum of the student ages is: %d.\n", sum);


		//STOP AND TEST YOUR PROGRAM!!!!
		//initialize sum to 0
		sum = 0;

		//start a do..while loop
		do {

			//in do..while prompt with "Enter student ages or 0 to stop: "
			printf("Enter student ages or 0 to stop: ");

			//in do...while set age equal to the next integer from the keyboard
			scanf("%d", &age);

			//in do... while accumulate the sum of ages in sum
			sum += age;

			//end of do... while - set condition to be age!=0
		} while (age != 0);

		//print out "The sum of student ages is: (sum).\n"
		printf("The sum of student ages is: %d.\n", sum);


		//STOP AND TEST YOUR PROGRAM HERE!!!!
		//declare an integer named numberOfStudents
		int numberOfStudents;

		//initialize sum to 0
		sum = 0;

		//prompt with "Please enter the number of students in the course: "
		printf("Please enter the number of students in the course: ");

		//read in the next integer from the keyboard into an integer named 
		//numberOfStudents
		scanf("%d", &numberOfStudents);

		//start a for loop that initializes i to 1, runs while i is smaller 
		//than or equal to numberOfStudents, and increments i
		for (int i = 1; i <= numberOfStudents;i++) {

			//in for - Prompt "Enter student age: "
			printf("Enter student age: ");

			//in for - store the next integer from standard input into age
			scanf("%d", &age);

			//in for - accumulate the age into sum
			sum += age;
		}
		//print out "Sum of ages: (sum).\n"
		printf("Sum of ages: %d.\n", sum);


		//STOP AND TEST HERE
		//declare integers count, grade, and number and initialize number to 0
		int count, grade, number;
		number = 0;

		//start a while loop for number less than or equal to 10
		while (number <= 10) {

			//in while - print out "number is now (number)\t"
			printf("Number is now %d\t", number);

			//in while - increment number by one
			number++; 
		}
		//print out "Final value of number is (number)\n"
		printf("Final value of number is %d\n", number);



		//STOP AND TEST HERE

		//prompt with "Please enter an integer: "
		printf("Please enter an integer: ");

		//store the integer in count
		scanf("%d", &count);

		//start a for that set number to 1, runs while number is less than equal 
		//to count and increments number
		for (number = 1; number <= count; number++) {

			//in for - print out "number is now (number).\n"
			printf("Number is now %d.\n", number);
		}


		//STOP AND TEST HERE
		//initialize sum to 0
		sum = 0;

		//initialize count to 0
		count = 0;

		//prompt with "Please enter a grade or -1 to stop: "
		printf("Please enter a grade or -1 to stop: ");

		//store the input integer in grade
		scanf("%d", &grade);

		//start a while loop that continues while grade!=-1
		while (grade != -1) {

			//in while - increment count
			count++;

			//in while - accumulates grade into sum
			sum += grade;

			//in while - "Please enter a grade or -1 to stop: "
			printf("Please enter a grade or -1 to stop: ");

			//in while - stores the next integer in grade
			scanf("%d", &grade);
		}
		//if count is not equal to 0
		if (count != 0) {

			//in if - print out "Your grade average is ((double)sum/count 
			//to 2 decimal places).\n"
			printf("Your grade average is %.2f.\n", ((double)sum / count));

		}
		//in else - print out "No grades were entered.\n"
		else printf("No grades were entered.\n");

		//return 0
		return 0;

}