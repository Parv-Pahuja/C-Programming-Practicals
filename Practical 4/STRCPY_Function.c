// Write a C Programs on String Operations using Built-in Functions (strcat, strcpy, strcmp).

//Usage of strcpy() Function

/* Write a C program that reads a string str from the user and copies it to another string using the in-built strcpy() function.

Input Format:

A single line containing a string str with a maximum length of 99 characters.

Output Format:

Print the copied string. */

#include <stdio.h>
#include <string.h>

int main() {
	char src[100];  // Source string
	char dest[100]; // Destination string
	
	// Input string from the user
	fgets(src, sizeof(src), stdin);
	src[strcspn(src, "\n")] = '\0'; 
    
    strcpy(dest,src);
    
    
    //Type your content here
    
    
    
	// Print the copied string
	printf("%s\n", dest);
	
	return 0;
}