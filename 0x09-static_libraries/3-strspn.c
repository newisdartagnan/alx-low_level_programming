#include "main.h"
/**
 * _strspn - does something at the memory
 * @s: a pointer
 * @accept: another
 * Return: a specific pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	if ((s == NULL) || (accept == NULL))
		return (i);
	while (*s && strchr(accept, *s++))
	{
		i++;
	}
	return (i);

}
