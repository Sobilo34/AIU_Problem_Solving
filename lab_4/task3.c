#include <stdio.h>

/**
 * Student Name: Bilal Oyeleke Soliu
 * Student ID: AIU25102458
 * main: Function that Input three integers 
 * Check if: 
 * First number equals second AND third is greater than second
 * Display the result 
 * Return: 0 (Success)
 */

int main() {
	int a, b, c;

	printf("Enter your first number. It must be an integer: ");
	scanf("%d", &a);
	printf("Enter your second number: It must be an interger: ");
	scanf("%d", &b);
	printf("Enter your third number. It must be an integer: ");
	scanf("%d", &c);

	printf("Is first number equal to second? %s\n", a == b ? "Yes" : "No");
	printf("Is third number greater than second? %s\n", c > b ? "Yes" : "No");

	return 0;
}

