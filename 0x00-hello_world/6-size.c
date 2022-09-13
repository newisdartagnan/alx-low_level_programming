
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	long int Type;
	long long int liType;
	char charType;

	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(liType));
	printf("Size of long long int: %zu byte\n", sizeof(lliType));
	printf("Siwe of float: %zu byte\n", sizeof(floatType);
	return 0;
}

