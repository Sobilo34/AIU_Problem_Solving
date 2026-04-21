#include <stdio.h>
#include <stdbool.h>

/**
 * Student Name: Bilal Oyeleke Soliu
 * Student ID: AIU25102458
 * main : The entry point function
 * Purpose: Declare an integer type variable 
 * - name intNumber and assign  a value of 30.
 * Declare a float type variable name floatNumber
 * - and assign it a value of 30.7
 * Declare a double type variable name doubleNumber
 * - and assign it a value of 45.1234
 * Declare a bool type variable name boolean and
 * - assign it a value of true
 * Declare a char type variable name charName
 * - and assign it a value of u
 * Lastly, print the values of all declared variables.
 */

int main(void) {
	int intNumber = 30;
	float floatNumber = 30.7;
	double doubleNumber = 45.1234;
	bool boolean = true;
	char charName = 'u';

	printf("The value of intNumber is %d\n", intNumber);
	printf("The value of floatNumber is %f\n", floatNumber);
	printf("The value of doubleNumber is %lf\n", doubleNumber);
	printf("The value of boolean is %s\n", boolean ? "true" : "false");
	printf("The value of charName is %c\n", charName);

	return 0;
}


