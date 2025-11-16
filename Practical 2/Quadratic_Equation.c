//Write a  C Programs on Looping and Branching Statements including Switch-Case, Conditional Checks, Quadratic Equations, Calendar Operations, and Digit Processing

//Roots and Nature of Quadratic Equation


/* Write a C program to find the roots and nature of the roots of a quadratic equation, given its coefficients.

Input Format:

The program prompts the user with:
Enter coefficients a, b and c: <a> <b> <c>
Input consists of three float values (a, b, and c) separated by spaces

Output Format:

The output depends on the discriminant value D = b^2 - 4ac, with the following possibilities
If the roots are real and different (discriminant > 0):
root1 = <valuel> and root2 = <Value2>
If the roots are real and the same (discriminant == 0):
root 1 = root2 = <value2>
If the roots are complex (discriminant < 0).
root 1 = <real> + <imag>i and root2 = <real> - <imag>i

where all the roots are float values formatted to two decimals.

Hint: Use formula ((-b +- b^2 - 4ac)/2a) for finding the roots of quadratic equation */

#include <stdio.h>
#include <math.h>
int main() {
double a, b, c;
	printf("Enter coefficients a, b and c: ");
	if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 0;
	double D = b*b - 4*a*c;
	if(D > 0) {
		double r1 = (-b + sqrt(D)) / (2*a);
		double r2 = (-b - sqrt(D)) / (2*a);
		printf("root1 = %.2f and root2 = %.2f", r1, r2);
	} 
	else if (D == 0) {
		double r = -b / (2*a);
		printf("root1 = root2 = %.2f", r);
	}
	else {
		double real = -b / (2*a);
		double imag = sqrt(-D) / (2*a);
		printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi", real, imag, real, imag);
	}
	return 0;

}
