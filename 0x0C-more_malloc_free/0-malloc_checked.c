#include "main.h"
#include <string.h>
/**
 * malloc_checked - prints char
 * @b: a int
 * Return: 98 succeed
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
	{
		return ("98");
	}
	return (p);
}
