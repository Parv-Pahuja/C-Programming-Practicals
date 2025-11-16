//PARV PAHUJA - 25070521089

//Write a C Programs on Arrays including Mean, Variance, Deviation, Sum of Positives and Negatives, Transpose, and Lower Triangular Matrix

//Lower Triangular Matrix


/* Write a C program to find whether a given matrix is a Lower triangular matrix or not.

Input Format:

The first line input consists of two integers, m and n, representing the number of rows and columns, respectively. It should be provided in the following format:
Enter no of rows, columns: <m> <n>
The next m x n integers represent the elements of the matrix in row-wise order, in the following format:
Enter elements of matrix:
<r1c1> <r1c2> ... <r1cn>
<r2c1> <r2c2> ... <r2cn>
...
<rmc1> <rmc2> ... <rmcn>

Output Format:

If the matrix is not square (i.e., the number of rows is not equal to the number of columns), the program should print: "Matrix must be square matrix"
If the matrix is square and all the elements above the main diagonal are zero, the program should print: "Lower triangular matrix"
Otherwise, if any element above the main diagonal is non-zero, the program should print: "Not a lower triangular matrix"

Note:

Refer to the visible test cases for better understanding. */

#include <stdio.h>
void main() {
	int a[10][10], i, j, n, m, temp=0;
	printf("Enter no of rows, columns: ");
	scanf("%d %d", &m, &n);
	printf("Enter elements of matrix:");
	for(i=0; i<m; i++)
		{
			for(j=0; j<m; j++)
				{
					scanf("%d " , &a[i][j]);
				}
		}
	
		if(m != n)
		{
			printf("Matrix must be square matrix\n");
		}
		else
		{
			for(i=0; i<m; i++)
			{
				for(j=0; j<n; j++)
					{
						if((i<j)&&(a[i][j]!=0))
							temp = temp + 1;
					}
			}
			if(temp == 0)
				printf("Lower triangular matrix\n");
			else
				printf("Not a lower triangular matrix\n");
		}
	
}