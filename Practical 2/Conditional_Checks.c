//Write a  C Programs on Looping and Branching Statements including Switch-Case, Conditional Checks, Quadratic Equations, Calendar Operations, and Digit Processing

//Conditional Checks
//Check Whether a Given Input Integer is in Between Two Values x and y.

/* Write a C program to check whether a given integer is in between two specified values, (lower bound) and y (upper bound), inclusive.

Input Format:

The first line contains an integer z the lower bound.
The second line contains an integer y - the upper bound.
The third line contains an integer num the number to check.

Output Format:

If num is between and y (inclusive), print:
num is in between x and y
Otherwise, print.
num is not in between x and y
Replace num, z, and y with their actual values in the output.

Note: Some parts of the code are given, fill in the missing code. */

#include <stdio.h>

int main() {
	int x, y, num;
	
	// Input the values of x, y, and num
	printf("lower bound(x): ");
	scanf("%d", &x);
	
	printf("upper bound(y): ");
	scanf("%d", &y);
	
	printf("number to check: ");
	scanf("%d", &num);
	
	// Check if num is between x and y
	
	if(x <= num && num <= y) {
		printf("%d is in between %d and %d\n", num, x, y);
	}
	else {
		printf("%d is not in between %d and %d\n", num, x, y);
	}
	
	
	
	return 0;
}