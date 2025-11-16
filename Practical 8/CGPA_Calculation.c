//Write a C Programs on Structures for Distance Addition and CGPA Calculation

//CGPA Calculation
//CGPA Using Structure

/* Write a C program that defines a structure to store information about a student. The structure should include the student's name, marks in five subjects, and the CGPA. Your program should read the student's name (which may contain spaces) and their marks in five subjects, each out of 100. Using this information, calculate the CGPA on a 5.0 scale, where

CGPA = ((Total marks)/500) * 5

After calculating the CGPA, display the student's transcript, including their name, the CGPA rounded to two decimal places, and their academic classification. Based on the CGPA, the program should display the class obtained using the following criteria:

CGPA ≥ 4.5: First Class
CGPA ≥ 3.5 and < 4.5: Second Class
CGPA ≥ 2.5 and < 3.5: Third Class
CGPA < 2.5: Fail

Input Format:

First line: A string denoting the name of the student (can contain spaces).
Second line: Five floating-point numbers separated by spaces, representing the marks in 5 subjects (each out of 100).

Output Format:

A line showing the student's name (as entered).
A line displaying the CGPA, rounded to 2 decimal places.
A line showing the class obtained.

Note: Partial code is provided, and you are required to fill in the missing parts. */

#include <stdio.h>

// Define a simple structure for Student
struct Student {
	char name[50];
	float marks1, marks2, marks3, marks4, marks5;
	float cgpa;
};

// Function to calculate CGPA
float getCGPA(float m1, float m2, float m3, float m4, float m5) {
	//write code
	float total = m1 + m2 + m3 + m4 + m5;
	return(total / 500.0) * 5;
}

// Function to print class based on CGPA
void printClass(float cgpa) {
	//write code
	if (cgpa >= 4.5)
		printf("Class: First Class\n");
	else if(cgpa >= 3.5)
		printf("Class: Second Class\n");
	else if(cgpa >= 2.5)
		printf("Class: Third Class\n");
	else
		printf("Class: Fail\n");
        
}

int main() {
	struct Student s;
	fgets(s.name, sizeof(s.name), stdin);
	scanf("%f %f %f %f %f", &s.marks1, &s.marks2, &s.marks3, &s.marks4, &s.marks5);
	s.cgpa = getCGPA(s.marks1, s.marks2, s.marks3, s.marks4, s.marks5);
	printf("Transcript\n");
	printf("Name: %s", s.name);
	printf("CGPA: %.2f\n", s.cgpa);
	printClass(s.cgpa);
	return 0;
}