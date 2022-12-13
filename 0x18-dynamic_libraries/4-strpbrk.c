#include "main.h"
/**
 * _strpbrk - does something at the memory
 * @s: a pointer
 * @accept: another
 * Return: a specific pointer
 */
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
		s++;
		}
	}
	return (NULL);
}

