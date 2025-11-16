//PARV PAHUJA - 25070521089

//Write a C Programs on Pointers includes String Sorting by Length and Calculation of Area and Circumference of a Circle

//String_Sorting
//Sort Strings by Length using Array of Pointers

/* Write a C program to sort an array of strings based on their lengths using an array of pointers.

Input Format:

The first line contains an integer n, the number of strings.
The next n lines contain the strings.

Output Format:

Print the strings on separate lines, sorted by their length from shortest to longest.

Note: If there are multiple strings with the same length, print them in the order of their appearance in the original array */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

int main() {
	int n;
	char *strings[MAX_STRINGS]; // Array of pointers to strings
	char inputString[MAX_LENGTH];
    // Write your code here...


    scanf("%d", &n);

    // Read strings and allocate memory dynamically
    for (int i = 0; i < n; i++) {
        scanf("%s", inputString);

        strings[i] = (char *)malloc(strlen(inputString) + 1);
        strcpy(strings[i], inputString);
    }

    // Stable bubble sort based on string length
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strlen(strings[j]) > strlen(strings[j + 1])) {
                char *temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }

    // Print sorted strings
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
        free(strings[i]);  // free allocated memory
	}
	return 0;
}