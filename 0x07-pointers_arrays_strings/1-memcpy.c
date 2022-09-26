#include "main.h"
/**
 * _memcpy - does something at the memory
 * @dest: a pointer
 * @src: the value in case
 * @n: number of bytes
 * Return: a specific pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	if ((dest != NULL) && (src != NULL))
	{
		while (n)
		{
		*(dest++) = *(src++);
		--n;
		}
	}
	return (dest);
}
