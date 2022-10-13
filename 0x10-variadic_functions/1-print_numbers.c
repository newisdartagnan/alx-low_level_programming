#include "variadic_functions.h"
/**
 * print_numbers - Short description
 * @separator: a pointer
 * @n: First member
 * Description: Longer description
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
	if (i != n - 1)
		printf("%s", separator);
	}
	if (separator == NULL)
	va_end(p);
	printf("\n");
}
