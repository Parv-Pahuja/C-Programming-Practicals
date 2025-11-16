//PARV PAHUJA - 25070521089

//Write a C Programs on Unions includes Usage and Display of Union Variables

//Display Of Union
//Print Union Variables

/* You are provided with an enum to track whether the union currently holds an integer or a floating-point number, as well as a union capable of storing either an int or a float. Write a C program that:

1. Defines a structure containing:
    A member of the provided enum type to track the type of data currently stored.
    A member of the provided union type to store either an integer or a floating-point value.
2. Declares two variables of this structure type.
3. Reads an integer value from the user, stores it in the first variable, and sets the type tracker accordingly.
4. Clears the input buffer to ensure the next input is read correctly.
5. Reads a floating-point value from the user, stores it in the second variable, and sets the type tracker accordingly.
6. Prints the contents of the first variable:
    If the stored type is integer, print using %d.
    If the stored type is floating-point, print using %f.
7. Prints the contents of the second variable:
    If the stored type is integer, print using %d.
    If the stored type is floating-point, print using %.1f.

Input Format:

The first line prompts the user to input an integer value.
The second line prompts the user to input a floating-point value.

Output Format:

The first line should display the first variable, which is the integer value.
The second line should display the second variable, which is the floating-point value, formatted to one decimal place.

﻿Note: The partial code has been provided to you in the editor, and you are required to fill in the missing code. */

#include <stdio.h>

// Enum to track the type of data stored in the union
enum Type {
    INTEGER,
    FLOATING_POINT
};

// Union definition
union Data {
	int integer;
	float floating_point;
};

// Structure definition to track the type of data stored in the union

typedef struct Temp{
	enum Type type;
	union Data value;
} Temp;

int main() {
    // Initialize and print the union variables
	Temp v1, v2;

    // Input for variable1
	scanf("%d", &v1.value.integer);
	v1.type = INTEGER;

    // Clear the input buffer
	while (getchar() != '\n');

    // Input for variable2
	scanf("%f", &v2.value.floating_point);
	v2.type = FLOATING_POINT;

    // Print variable1
	if(v1.type == INTEGER) {
		printf("%d\n", v1.value.integer);
	} 
	else {
		printf("%.1f\n", v1.value.floating_point);
	}

    // Print variable2
	if(v2.type == INTEGER) {
		printf("%d\n", v2.value.integer);
	} 
	else {
		printf("%.1f\n", v2.value.floating_point);
	}

	return 0;
}
