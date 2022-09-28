#include "main.h"
/**
 * _print_rev_recursion - does something at the memory
 * @s: a pointer
 * Return: a specific pointer
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
