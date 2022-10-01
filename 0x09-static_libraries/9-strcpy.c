#include "main.h"
#include <stddef.h>
/**
 * _strcpy - Does nothing with void as arg
 * @dest: pointer
 * @src: another
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 **/
char *_strcpy(char *dest, char *src)
{
	char *ptr;

	if (dest == NULL)
	{
		return (NULL);
	}

	ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (ptr);
}
