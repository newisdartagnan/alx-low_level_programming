#include "main.h"
/**
 *  factorial - does something at the memory
 * @n: an integer
 * Return: a specific pointer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
