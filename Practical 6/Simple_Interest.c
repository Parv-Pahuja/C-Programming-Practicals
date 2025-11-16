//PARV PAHUJA - 25070521089S

//Write a C Programs for Simple Interest, Prime Number, and Armstrong Number using Simple or Built-in Functions 

//Simple Interest
//Calculate Simple Interest

/* Write a C program to calculate the simple interest using the formula SI = PxTxR/100 , where P is the principal amount, T is the time, and R is the rate of interest.

Input Format:

Enter three integers P, T and R each in a single line.

Output Format:

Print a single integer, which is the calculated simple interest. */

#include <stdio.h>

// Function to calculate simple interest
int calculateSimpleInterest(int principal,int time,int rate) {
	// Complete the function
	return((principal*time*rate)/100);
}

int main() {
	int principal, time, rate, simpleInterest;
    // Read the number of principal, time, and rate from the user
    scanf("%d", &principal);
    scanf("%d", &time);
    scanf("%d", &rate);

	
	// Calculate the simple interest
	simpleInterest = calculateSimpleInterest(principal, time, rate);
	
	// Print the result
	printf("%d\n", simpleInterest);
	
	return 0;
}