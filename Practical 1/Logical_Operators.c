//PARV PAHUJA - 25070521089

//Write a C Programs to demonstrate the working of Arithmetic, Logical, Relational, and Conditional Operators

//Logical Operators

/* Write a C program that demonstrates the use of logical operators (&&, ||, 1) with dynamic input.
Prompt the user to enter two integer values and then use logical operators to determine the following:
If both numbers are positive or not.
If at least one number is equal to 5 or not.
If the first number is not greater than 10 or not,

Input Format:

The input prompts the user to enter two integers n1 and 12, separated by a space.

Output format:

The first line of output prints whether Both are positive or Both are not positive.
The second line of output prints: "(n1) or {n2} = 5" or "{n1), (n2)!= 5".
The third line of output prints "{1} < 10" or "{1} > 10

Note: Refer to sample test cases for better understanding. */

#include <stdio.h>

int main() {
	int n1, n2;
	printf("Enter numbers: ");
	scanf("%d %d", &n1, &n2);

	if(n1>0 && n2>0) {
		printf("Both are positive\n");
	}
	else{
		printf("Both are not positive\n");
	}
	if((n1==5) || (n2==5)) {
		printf("%d or %d = 5\n", n1, n2);
	}
	else{
		printf("%d,%d != 5\n", n1, n2);
	}
	if(n1 <= 10) {
		printf("%d <= 10\n",n1);
	}
	else{
		printf("%d > 10\n", n1);
	}

	
}