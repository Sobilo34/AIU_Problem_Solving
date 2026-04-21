#include <stdio.h>

/**
 * Student name - Bilal Oyeleke Soliu
 * Student ID - AIU25102458
 * main - Entry point
 * Return - Success
 */

int main(void) {
	int decimal = 15;
	int octal = 075;
	int hexDecimal = 0x2F;
	float flt = 1.34;
	float fltexp = 1.34e3;
	char letter = 'H';
	char whoami[] = "My name is Bilal. I am a Software Engineer";


	printf("The decimal literal value is %d\n", decimal);
	printf("The octal literal value is %o\n", octal);
	printf("The hexadecimal literal value is %X\n", hexDecimal);
	printf("The floating value is %f\n", flt);
	printf("The floating and exponential value is %e\n", fltexp);
	printf("The character literal is %c\n", letter);
	printf("The string literal is %s\n", whoami);

	return 0;
}
