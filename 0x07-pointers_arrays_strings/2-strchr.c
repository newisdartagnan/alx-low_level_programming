#include "main.h"
/**
 * _strchr - does something at the memory
 * @s: a pointer
 * @c: the value in case
 * Return: a specific pointer
 */
char *_strchr(char *s, char c)
{
	char *isCharNull = NULL;

	if (s != NULL)
	{
		do {
			if (*s == c)
			{
				isCharNull = s;
				break;
			}
		} while (*s++);
	}
	return (isCharNull);
}
