#include <stdio.h>

int main() {
	int a;

	printf("Enter your number: ");
	scanf("%d", &a);

	printf("Using the normal way\n");
	printf("Your number modulos 2 is: %d\n", a % 2);

	printf("Using Boolean expression\n");
	printf("Your number modulos 2 is: %d\n", a % 2 ? 1 : 0);

	return 0;
}
