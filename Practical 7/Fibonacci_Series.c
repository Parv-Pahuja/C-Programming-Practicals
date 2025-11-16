//PARV PAHUJA - 25070521089

//Write a C Programs on Recursive Functions for Fibonacci Series and Factorial

//Fibonacci Series
//Fibonacci Series using Recursion

/* Write a C program that takes a non-negative integer n as input and generates the Fibonacci sequence up to the nth term using recursion.

Input Format:

A single non-negative integer n.

Output Format:

Print the first n terms of the Fibonacci sequence, separated by spaces. */

#include <stdio.h>

// Recursive function to print Fibonacci numbers
void printFibonacci(int n, int t1, int t2) {
	
	// Write your code...
	if(n > 0) {
		printf("%d ", t1);
	printFibonacci(n -1, t2, t1 + t2);
	}
}

int main() {
    int n;

    // Input: Read the number of terms
    scanf("%d", &n);

    // Start the recursion with the first two Fibonacci numbers (0 and 1)
    printFibonacci(n, 0, 1);

    return 0;
}