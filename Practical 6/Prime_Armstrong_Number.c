//Write a C Programs for Simple Interest, Prime Number, and Armstrong Number using Simple or Built-in Functions 

//Prime and Armstrong Number
// Prime and Armstrong Using Built-In Function

/* Write a C program that includes two functions: one to check if a given number is a prime number and another to check if the given number is an Armstrong number. The program should prompt the user to enter a number and then use these functions to determine and display whether the number is prime or an Armstrong number.

Input Format:

A single integer input n representing the number to be checked.

Output Format:

The first line should indicate whether the number is a prime number.
The second line should indicate whether the number is an Armstrong number.

Constraints:

The program must use built-in functions (sqrt(), log10(), pow()) for calculations. */

#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int n) {
	if(n <= 0) {
		return 0;
	}
	for(int i=2; i<=sqrt(n); i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return 1;
}

// Function to check if a number is an Armstrong number
int is_armstrong(int n) {
	int originalNum = n;
	int numDigits = 0;
	double sum = 0.0;

	if(n == 0) {
		numDigits = 1;
	} else {
		numDigits = (int)log10(n) + 1;
	} 

	int temp = originalNum;
	while(temp > 0) {
		int digit = temp % 10;
		sum += pow(digit, numDigits);
		temp /= 10;
	}
	return (round(sum) == originalNum);
	
}

int main() {
	int n;
	
	// Input from the user
	scanf("%d", &n);
	
	// Check if the number is prime
	if (is_prime(n))
		printf("%d is prime\n", n);
	else
		printf("%d is not prime\n", n);
	
	// Check if the number is an Armstrong number
	if (is_armstrong(n))
		printf("%d is Armstrong\n", n);
	else
		printf("%d is not Armstrong\n", n);
	
	return 0;
}
