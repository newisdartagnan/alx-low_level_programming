#include "main.h"

/**
 * is_prime_number - does something at the memory
 * @n: an int
 * Return: a specific pointer
 */
int is_prime_number(int n)
{
	int j;

	j = 2;
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % j == 0)
		return (0);
	if (j * j > n)
		return (1);

	/* j += 1; */
	return (is_prime_number(j + 1));
}
