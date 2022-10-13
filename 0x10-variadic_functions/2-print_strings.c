#include "variadic_functions.h"
/**
 * print_strings - Short description
 * @separator: a pointer
 * @n: First member
 * Description: Longer description
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(p, char *));
	if (i != n - 1)
		printf("%s", separator);
	}
	if (separator == NULL)
	if (va_arg(p, char *) == NULL)
		printf("nil");
	va_end(p);
	printf("\n");
}
