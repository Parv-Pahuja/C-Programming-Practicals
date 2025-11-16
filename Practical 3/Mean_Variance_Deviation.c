//Write a C Programs on Arrays including Mean, Variance, Deviation, Sum of Positives and Negatives, Transpose, and Lower Triangular Matrix

//Mean, Variance & Deviation
//Mean, Variance, and Deviation of an Array

/* Write a C program to store the numbers given by the user in an array, and then find the mean, deviation & variance.

Mean = (Total Sum)/n
Variation = σ = (Σ(xi - μ)^2/N)^(1/2)
 Deviation = sqrt(variation)

Input Format:

Prompt the user to enter the number of values with the message: "Enter the number of values: ".
Then, prompt the user to enter the values one by one, separated by spaces, using the message: "Enter values : ".

Output Format:

Display the mean, variance, and standard deviation, each formatted to two decimal places and printed on separate lines as shown: 
Mean = <Mean value> 
Variance = <Variance value>
Deviation = <Deviation value>

Note:

Refer to the sample test cases for a better understanding.*/

#include <stdio.h>
#include <math.h>

int main() {
	int n, i;
	float a[10], sum = 0, mean, var = 0;
	printf("Enter the number of values: ");
	scanf("%d", &n);
	printf("Enter values : ");
	for (i = 0; i < n; i++) {
		scanf("%f\n", &a[i]);
		sum=sum+a[i];
	}
	mean=sum/n;
	printf("Mean = %.2lf\n", mean);
	for (i = 0; i < n; i++) {
		var = var + pow(a[i] - mean, 2);
	}
	var = var / n;
	printf("Variance = %.2lf\n", var);
	var = sqrt(var);
	printf("Deviation = %.2lf\n", var);

	return 0;
}