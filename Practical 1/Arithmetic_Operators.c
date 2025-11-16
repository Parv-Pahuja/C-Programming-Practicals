//PARV PAHUJA - 25070521089

//Write a C Programs to demonstrate the working of Arithmetic, Logical, Relational, and Conditional Operators

//Arithmetic Operators

/* Write a C program to perform arithmetic operations like +, -, *, /, and % on two input variables num.l and num2.

Input Format:

The first line of input is an integer representing the value for the first number, num1
The second line of input is an integer representing the value of the second number, num2.

Output Format:

The program prints the integers that represent the results of addition, subtraction, multiplication, division, and modulus, each on a new line.

Note:
Assuming that he value of num2 is always greater than 0.
Add a new line character (In) at the end of the output. */

#include<stdio.h>
int main() {
	int num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("%d\n", num1 + num2);
	printf("%d\n", num1 - num2);
	printf("%d\n", num1 * num2);
	printf("%d\n", num1 / num2);
	printf("%d\n", num1 % num2);
}