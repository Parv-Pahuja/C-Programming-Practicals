//PARV PAHUJA - 25070521089

//Write a C Programs on Structures for Distance Addition and CGPA Calculation

//Distance Addition
//Distance Addition Calculation

/* Write a C program that adds two distance measurements provided in feet and inches. The program should use a structure to represent each distance, with separate members for feet and inches.

The program must prompt the user to enter two distances sequentially. For each distance, it should first request the feet component and then the inches component. After receiving both measurements, the program should calculate their sum, automatically converting any excess inches to feet when the inches total 12.0 or more (where 12 inches equals 1 foot).

Input Format:

The program will prompt the user to enter two distances sequentially. For each distance, the user will provide:
The feet component (as an integer)The inches component (as a floating-point number)

Output Format:

The program will display the sum of the two distances in the following format: "Sum of distances = {X}' - {Y}.{Z}".

Note: The partial code has been provided to you in the editor; you are required to fill in the remaining code. */

#include <stdio.h>

struct Distance{
	int feet;
	float inch;
}d1,d2,d3;

int main() {
	// take first distance input
	printf("Enter 1st distance \n");
	printf("feet: ");
	scanf("%d", &d1.feet);
	printf("inch: ");
	scanf("%f", &d1.inch);
	
	// take second distance input
	printf("Enter 2nd distance \n");
	printf("feet: ");
	scanf("%d", &d2.feet);
	printf("inch: ");
	scanf("%f", &d2.inch);
	
	// adding distances
	d3.feet = d1.feet + d2.feet;
	d3.inch = d1.inch + d2.inch;
	
	// convert inches to feet if greater than 12
	if(d3.inch >= 12.0) {
		d3.feet = d3.feet + ((int)d3.inch/12);
		d3.inch = d3.inch - 12*((int)d3.inch/12);
	}
	if(d3.inch >= 12.0) {
		d3.inch -= 12.0;
		d3.feet += 1;
	}
	
	
	printf("Sum of distances = %d\'-%.1f\"", d3.feet,d3.inch);
	return 0;
}