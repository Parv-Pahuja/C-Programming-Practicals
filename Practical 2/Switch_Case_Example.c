//PARV PAHUJA - 25070521089

//Write a  C Programs on Looping and Branching Statements including Switch-Case, Conditional Checks, Quadratic Equations, Calendar Operations, and Digit Processing

//Weekday Number Using Switch Case

/* Write a C program to read the weekday number from the standard input and print the weekday name using switch-case.

Assume that the weekdays are provided with the below numbers:
Sunday ⟹ 0
Monday ⟹ 1
Tuesday ⟹ 2
Wednesday ⟹ 3
Thursday ⟹ 4
Friday ⟹ 5
Saturday ⟹ 6

Input Format:

A single line of input contains a positive integer representing the weekday number.

Output Format:

Display the corresponding day of the week based on the above given criteria.
If the given number is not a valid weekday number, print "Invalid weekday number" */

#include <stdio.h>

int main () {
	int weekdays;
	scanf("%d", &weekdays);

	switch(weekdays) {
	case 0 : printf("Sunday\n");
		break;
	case 1 : printf("Monday\n");
		break;
	case 2 : printf("Tuesday\n");
		break;
	case 3 : printf("Wednesday\n");
		break;
	case 4 : printf("Thursday\n");
		break;
	case 5 : printf("Friday\n");
		break;
	case 6 : printf("Saturday\n");
		break;
	default : printf("Invalid weekday number\n");
	}

	return 0;
}