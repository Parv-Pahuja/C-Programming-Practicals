//Write a C Programs to demonstrate the working of Arithmetic, Logical, Relational, and Conditional Operators

//Conditional Operators

/* Write a C program to display the greatest of three numbers using a conditional operator (ternary operator).

Input Format:

The first three lines of input each contain one integer representing num1, num2, and num3, respectively.

Output Format:

The output displays the greatest of the three entered integers.

Note: Refer to sample test cases for better understanding. */

int main() {
	int num1, num2, num3, greatest;

    // Take input from user
	printf("num1: ");
    scanf("%d", &num1);

	printf("num2: ");
	scanf("%d", &num2);


	printf("num3: ");
	scanf("%d", &num3);


    // Find the greatest number using the conditional operator
	greatest = (num1 >= num2 && num1 >= num3) ? num1 : ( (num2 >= num3 && num2 >= num3) ? num2 : (num3) );

    // Display the greatest number
	printf("Greatest number: %d\n",greatest);

	return 0;
}