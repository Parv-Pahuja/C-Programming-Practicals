//Write a C Programs on Arrays including Mean, Variance, Deviation, Sum of Positives and Negatives, Transpose, and Lower Triangular Matrix

//Array Sum Of Positives & Negatives

/* Write a C program to find the sum of positive and negative elements of a one - dimensional array.

Input Format:

The first line contains an integer n, which represents the number of elements in the array.
The second line contains n space-separated integers, representing the elements of the array.

Output Format:

The first line displays the sum of all positive elements in the array.
The second line displays the sum of all negative elements in the array. */

#include <stdio.h>
int main() {
	int a[5], i, n, neg_sum=0, pos_sum=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
			{
				scanf("%d", &a[i]);
				{
		if(a[i]<0)
			neg_sum= neg_sum + a[i];
		else
			pos_sum= pos_sum + a[i];
				}
			}
	printf("%d",pos_sum);
	printf("\n");
	printf("%d",neg_sum);
	printf("\n");
	return 0;
}