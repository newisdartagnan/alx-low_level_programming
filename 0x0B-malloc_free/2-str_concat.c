#include "main.h"
#include <string.h>
/**
 * str_concat - prints char
 * @s1: a pointer
 * @s2: a pointer
 * Return: 0 succeed
 */
char *str_concat(char *s1, char *s2)
{
	char *ret;
	size_t a = strlen(s1), b = strlen(s2), st = a + b + 1;

	if (st < b + 1)
		return (NULL);
	ret = malloc(st);

	if (ret == NULL)
		return (NULL);
	strcpy(ret, s1);
	strcpy(ret + a, s2);
	return (ret);
}
