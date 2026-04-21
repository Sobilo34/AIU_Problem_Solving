#include <stdio.h> 

/**
 * Student Name: Bilal Oyeleke Soliu
 * Student ID: AIU25102458
 * main: The entry point function that uses 'define' keyword for constant declaration"
 * Returns: 0 (Success)
 */

#define LENGTH 10
#define WIDTH 5 
#define NEWLINE '\n' 

int main() { 
	int area; 

	area = LENGTH * WIDTH; 
	printf("value of area : %d", area); 
	printf("%c", NEWLINE); 

	return 0; 
}

