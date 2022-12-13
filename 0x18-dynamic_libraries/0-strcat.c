#include "main.h"
/**
 * _strcat - Does nothing with void as arg
 * @dest : a pointer
 * @src : another
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */
char *_strcat(char *dest, char *src)
{
	int j, i;

	j = strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

