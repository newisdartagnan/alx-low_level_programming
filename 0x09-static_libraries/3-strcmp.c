#include "main.h"
/**
 * _strcmp - Does nothing with void as arg
 * @s1 : a pointer
 * @s2 : another
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
