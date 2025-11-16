//PARV PAHUJA - 25070521089

// Write a C Programs on String Operations using Built-in Functions (strcat, strcpy, strcmp).

//Usage of strcat() Function


/* Write a C program that reads two strings a and b from the user and concatenates two strings using the strcat() function.

Input Format:

The first line contains the first string a (up to 99 characters).
The second line contains the second string b (up to 99 characters).

Output Format:

Print the concatenated string. */

#include <stdio.h>
#include <string.h>

int main() {
	char str1[100];  // First string
	char str2[100];  // Second string

	scanf("%s",str1);
	scanf("%s",str2);

	strcat(str1,str2);
    
    
    //Type your code here
    
    
    
    

	// Print the concatenated result
	printf("%s\n", str1);
	
	return 0;
}