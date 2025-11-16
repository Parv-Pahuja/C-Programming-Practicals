//PARV PAHUJA - 25070521089

//Write a C Programs on Arrays including Mean, Variance, Deviation, Sum of Positives and Negatives, Transpose, and Lower Triangular Matrix

//Transpose Of Matrix

/* Write a C program to read a square matrix of integers and compute its transpose.
The transpose of a matrix is obtained by flipping it over its main diagonal, which means converting the rows into columns and columns into rows.

Input Format:

The first line contains an integer N - the number of rows and columns in the square matrix.
The next N lines each contain N integers - the elements of the matrix row-wise.

Output Format:

The output displays the transpose with rows on new lines and elements separated by spaces.

Sample Input: 
3
1 2 3
4 5 6
7 8 9

Sample Output:
1 4 7
2 5 8
3 6 9 */

#include <stdio.h>

int main() {
    int a[10][10], i, j, n, b[10][10];
	scanf("%d", &n);
	for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
				{
					scanf("%d", &a[i][j]);
				}
		}
	for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
				{
					b[j][i] = a[i][j];
				}
		}
	for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
				{
					printf("%d " ,b[i][j]);
				}
			{
				printf("\n");
			}
		}
	return 0;
}