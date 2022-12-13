#include "main.h"
/**
 * _strncat - Does nothing with void as arg
 * @dest : a pointer
 * @src : another
 * @n : an integer
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */
char *_strncat(char *dest, char *src, int n)
{
	int j, i;

	j = strlen(dest);
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

