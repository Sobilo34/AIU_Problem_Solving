#include <stdio.h>

/**
 * Student Name: Bilal Oyeleke Soliu
 * Student ID: AIU25102458
 * main: The entry point function that uses "const" keyword
 * - for constant decclaration
 * Return: 0 (Success)
 */

int main() { 
	const int LENGTH = 10; 
	const int WIDTH = 5; 
	const char NEWLINE = '\n'; 

	int area;
	area = LENGTH * WIDTH; 
	printf("value of area : %d", area); 
	printf("%c", NEWLINE);

	return 0; 
}

