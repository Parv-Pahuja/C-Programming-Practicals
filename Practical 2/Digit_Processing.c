//PARV PAHUJA - 25070521089

//Write a  C Programs on Looping and Branching Statements including Switch-Case, Conditional Checks, Quadratic Equations, Calendar Operations, and Digit Processing

//Digit Processing
//Sum of Digits of a Five Digit Number

/* Write a C program that reads a five-digit integer from the user and prints the sum of its digits.

Input Format:

Input contains a single five-digit number n.

Output Format:

Print the sum of individual digits if the input is valid (i.e., n has exactly 5 digits).
Print "Invalid input i"f the input is invalid (i.e., n does not have exactly 5 digits).

Constraints:
10000 <= n <= 99999 */

#include <stdio.h>
int main() {
	int n;
	if(scanf("%d", &n) != 1) {
		
	}
	int x = n < 0 ? -n : n;
	if(x < 10000 || x > 99999) {
		printf("Invalid input");
		return 0;
	}
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += x % 10;
		x /= 10;
	}
	printf("%d", sum);
	return 0;
}