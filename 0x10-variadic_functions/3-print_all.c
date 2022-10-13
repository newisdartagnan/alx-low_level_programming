#include "variadic_functions.h"
/**
 * print_all - Short description
 * @format: First member
 * Description: Longer description
 * Return: a int
 */
void print_all(const char * const format, ...)
{
	va_list p;

	va_start(p);
	va_arg(p, format);
	va_end(p);
	printf("\n");
}
