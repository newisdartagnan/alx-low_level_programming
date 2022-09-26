#include "main.h"
/**
 * _memset - does something at the memory
 * @s: a pointer
 * @b: the value in case
 * @n: number of bytes
 * Return: a specific pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
