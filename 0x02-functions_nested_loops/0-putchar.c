#include <stdio.h>
#include "main.h"
/**
 * _once - writes the character _putchar to stdout
 * @_putchar: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char _once(char _putchar)
{
	_putchar(_putchar);
	return (0);
}
