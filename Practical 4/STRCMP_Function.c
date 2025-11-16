// Write a C Programs on String Operations using Built-in Functions (strcat, strcpy, strcmp).

//Usage of strcmp() Function

/* Write a C program that compares two strings, str1 and str2, entered by the user, using the built-in strcmp() function.

Input Format:

The first line contains the first string str1 (up to 99 characters).
The second line contains the second string str2 (up to 99 characters).

Output Format:

Print "equal" if the strings are the same.
Print "str1 is less than str2" if the first string is lexicographically smaller than the second string.
Print "str1 is greater than str2" if the first string is lexicographically larger than the second string. */

#include <stdio.h>
#include <string.h>

int main() {
	char str1[100];  // First string
	char str2[100];  // Second string
	int result;
    scanf("%s",str1);
	scanf("%s",str2);
    
    //Type your content here
    
    result = strcmp(str1,str2);
    
	if (result == 0) {
		printf("equal\n");
	} else if (result < 0) {
		printf("str1 is less than str2\n");
	} else {
		printf("str1 is greater than str2\n");
	}
	
	return 0;
}