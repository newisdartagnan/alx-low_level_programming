#include "main.h"
/**
 * _strdup - prints char
 * @str: the size of the memory to print
 * Return: 0 succeed
 */
char *_strdup(char *str)
{
	char *dst = malloc(strlen(str) + 1);

	if (str == NULL)
		return (NULL);
	strcpy(dst, str);
	return (dst);
}
