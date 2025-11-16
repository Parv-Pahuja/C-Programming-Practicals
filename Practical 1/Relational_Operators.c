//Write a C Programs to demonstrate the working of Arithmetic, Logical, Relational, and Conditional Operators

//Relational Operators

/* Write a C program that demonstrates the use of relational operators (<, <=, >, >=, ==, != ). Prompt the user to enter two integer values and then use relational operators to compare the numbers and print the results.

Input Format:

The program prompts the user to enter two integers separated by spaces.

Output Format:

The program prints "True" or "False" for various comparison operations between the two integers, with each result on a new line.

Note: Refer to the displayed test cases for better understanding of output format. */

#include <stdio.h>
int main() {
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("%d < %d: %s\n",a,b, (a<b)? "True":"False");
	printf("%d <= %d: %s\n",a,b, (a<=b)? "True":"False");
	printf("%d > %d: %s\n",a,b, (a>b)? "True":"False");
		printf("%d >= %d: %s\n",a,b, (a>=b)? "True":"False");
		printf("%d == %d: %s\n",a,b, (a==b)? "True":"False");
		printf("%d != %d: %s\n",a,b, (a!=b)? "True":"False");
	return 0;
}


