#include <stdio.h>

/**
 * Student Name: Bilal Oyeleke Soliu
 * Student ID: AIU25102458
 * main: Function that Compare two numbers using
 * relational operators (>, <, ==, !=) 
 * Display results as 1 (true) or 0 (false)
 * Return: 0 (Success)
 */

int main() {
	int a = 10;
	int b = 7;

	printf("This program compares two numbers A as 10 and B as 7  with relational operators\nNote that if the answer is 1, it means TRUE and if it is 0, it means FALSE\n\n");
	printf("A is greater than B = %d\n", a > b);
	printf("B is greater than A = %d\n", b > a);
	printf("A is less than B = %d\n", a < b);
	printf("B is less than A = %d\n", b < a);
	printf("A is equal to B = %d\n", a == b);
	printf("A is not equal to B = %d\n", a != b);

	return 0;
}

