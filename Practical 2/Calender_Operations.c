//PARV PAHUJA - 25070521089

//Write a  C Programs on Looping and Branching Statements including Switch-Case, Conditional Checks, Quadratic Equations, Calendar Operations, and Digit Processing

//Calender Operations
//Number of Days in the Month using switch

/* Write the C program to Input month number and print number of days in that month using switch.

Input Format:

A single integer representing the month number (1 to 12).  

Output Format:

If the month has 31 days, print 31 days.  
If the month has 30 days, print 30 days.  
If the month is February, print 28 or 29 days.  
If the input is invalid (not between 1 and 12), print Invalid month number.

Note: Refer the sample test cases for better understanding. */

#include <stdio.h>

int main() {
	int month;

	//Prompt the user to enter a month number
	printf("Enter month number: ");
	scanf("%d", &month);

	//Use a switch statement to determine the number of days
	switch (month) {
	case 1 : //January
	case 3 : //March
	case 5 : //May
	case 7 : //July
	case 8 : //August
	case 10 : //October
	case 12 : //December
		printf("31 days\n");
		break;
	case 4 : //April
	case 6 : //June
	case 9 : //September
	case 11 : //November
		printf("30 days\n");
		break;
	case 2 : //February
		printf("28 or 29 days\n"); //February has 28 or 29 days depending in Leap year
		break;
	default : printf("Invalid month number\n");
		break;
	}
}