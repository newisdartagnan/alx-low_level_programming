#include "main.h"
/**
 * _strncpy - Does nothing with void as arg
 * @dest : a pointer
 * @src : another
 * @n : an integer
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

