#include <stdio.h>
#include <math.h>

/**
 * Student Name: Bilal Oyeleke Soliu
 * Student ID: AIU25102458
 * main: The entry point function that uses const
 * Returns: 0 (Success)
 */

const float radius = 20.0;


int main() {
	float area;

	area = M_PI * pow(radius, 2); // area = M_PI * (radius * radius)
	printf("Area of the circle is %.2f\n", area);

	return 0;
}
