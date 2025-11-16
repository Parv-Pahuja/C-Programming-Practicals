//PARV PAHUJA - 25070521089

//Write a C Programs on Recursive Functions for Fibonacci Series and Factorial

//Factorial
//Factorial using Recursion

/* Write a recursive function factorial that accepts an integer n as a parameter and returns the factorial of n.

You may assume that the value passed is non-negative and that its factorial can fit in the range of type int.

Input Format:

The first line is the integer that represents the number of test cases.
Each test case will contain a single integer n where n >= 0.

Output Format:

For each input case, generate and print the factorial of the integer. */

#include <stdio.h>
int factorial(int n)
{
    
    // Write your code here
    if((n == 0) || (n == 1))
		return 1;
	else
		return(n*factorial(n-1));

}
int main()
{
   int T, no;
   scanf("%d",&T);
   while(T--)
   {
     scanf("%d",&no);
     printf("%d\n",factorial(no));
   }
 return 0;
}