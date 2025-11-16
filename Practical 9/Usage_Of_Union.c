//Write a C Programs on Unions includes Usage and Display of Union Variables

//Usage Of Union

/* Write a C program to demonstrate the usage of unions which manages two integer values, x and y.

Tasks:

Define a Union: Declare a union named test that includes two members: x and y, both of type int.

Main Function: Implement the main() function to perform the following steps:

Prompt the user to input an integer value for x.
Display the current values of x and y after setting x.
Prompt the user to input an integer value for y.
Display the updated values of x and y after setting y.

Output Format: Ensure that the program outputs the values of x and y in a clear and understandable format after each input operation as mentioned in the below sample test case.

Sample Test Case:

x: 2
After making x = 2:
x= 2 y= 2
y: 10
After making y = 10:
x= 10 y= 10 */

#include <stdio.h>

union test {
	// initialize required variables
	int x,y;
};

	// write your code here
int main()
{
	union test t;
	
	printf("x: ");
	//accept user input for x and assign it to the union variable x 
	scanf("%d", &t.x);
	
	printf("After making x = %d:\nx= %d y= %d\n",t.x,t.x,t.y);
	printf("y: ");
	//accept user input for y and assign it to the union variable y
	scanf("%d",&t.y);
	printf("After making y = %d:\nx= %d y= %d",t.y,t.x,t.y);
 	return 0;
}