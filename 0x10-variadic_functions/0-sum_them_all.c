#include "variadic_functions.h"
/**
 * sum_them_all - Short description
 * @n: First member
 * Description: Longer description
 * Return: a int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int S, i;
	va_list p;

	S = 0;
	va_start(p, n);
	for (i = 0; i < n; i++)
		S += va_arg(p, int);
	if (n == 0)
		return (0);
	va_end(p);
	return (S);
}
