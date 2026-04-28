#include <stdio.h>

/**
 * Student Name: Bilal Oyeleke Soliu
 * Student ID: AIU25102458
 * main: The function that 
 * Accepts two integers from the user 
Performs all arithmetic operations (+, -, *, /, %) 
Displays the results
 * Return: 0 (Success)
 */

int main() {
	int a, b;

	printf("Enter your first number: ");
	scanf("%d", &a);
	printf("Enter your second number: ");
	scanf("%d", &b);
	printf("Your first number + Your second number = %d\n", a + b);
	printf("Your first number - Your second number = %d\n", a - b);
	printf("Your second number - Your first number = %d\n", b - a);
	printf("Your first number * Your second number = %d\n", a * b);
	printf("Your first number / Your second number = %d\n", a / b);
	printf("Your second number / Your first number = %d\n", b / a);
	printf("Your first number %% Your second number = %d\n", a % b);
	printf("Your second number %% Your first number = %d\n", b % a);

	return 0;
}
