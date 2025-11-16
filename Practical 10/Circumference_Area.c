//PARV PAHUJA - 25070521089

//Write a C Programs on Pointers includes String Sorting by Length and Calculation of Area and Circumference of a Circle

//Circumference_Area
//Area and Circumference of a Circle using Pointers

/* Write a function to compute the area and circumference of a circle, having area and circumference as pointer arguments and radius as an ordinary argument.

Formulas:

area = pixr Xr
circumference = 2 x pixr

Input Format:

A single line of input contains a float value representing the radius of the circle.

Output Format:

First line: Displays the area of the circle as a floating-point value formatted to 2 decimal places.
Second Line: Displays the perimeter (circumference) of the circle as a floating-point value formatted to 2 decimal places.

Note: Take pi = 3.14 */

#include<stdio.h>

void area_peri(float, float*, float*);
  
int main() {
	
	float r, area, peri;

    scanf("%f", &r);

    area_peri(r, &area, &peri);

    printf("%.2f\n", area);
    printf("%.2f\n", peri);

    return 0;

	
}

void area_peri(float r, float *area, float *peri) {
	const float pi = 3.14;

    *area = pi * r * r;
    *peri = 2 * pi * r;
	
	
}