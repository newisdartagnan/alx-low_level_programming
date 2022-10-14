#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_all - Short description
 * @format: First member
 * Description: Longer description
 * Return: a int
 */
void print_all(const char * const format, ...)
{
	va_list p;
	char *t;

	t = malloc(sizeof(char *));
	va_start(p, format);
	if (va_arg(p, char *) == NULL)
		printf("nil");
	while (*t != '\0')
	{
		if (*format == 'd')
		{
			printf("%d", va_arg(p, int));
		}
		else if (*format == 'c')
		{
			printf("%c", va_arg(p, int));
		}
		else if (*format == 'f')
		{
			printf("%f", va_arg(p, double));
		}
		else if (*format == 's')
		{
			printf("%s", va_arg(p, char *));
		}
		++t;
	}
	printf("\n");
	va_end(p);
}
