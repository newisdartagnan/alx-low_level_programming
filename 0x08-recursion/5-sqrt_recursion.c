#include "main.h"
/**
 * sqrt_check - checks for the square root of c
 * @m: an int
 * @n: another
 *
 * Return: -1 or sqrt of m
 */
int sqrt_check(int m, int n)
{
	if (m * m == n)
		return (m);
	if (m * m > n)
		return (-1);
	return (sqrt_check(m + 1, n));
}

/**
 * _sqrt_recursion - does something at the memory
 * @n: an int
 * Return: a specific pointer
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
