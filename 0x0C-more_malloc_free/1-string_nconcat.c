#include "main.h"
#include <string.h>
/**
 * string_nconcat - prints char
 * @s1: pointer
 * @s2: pointer
 * @n: a int
 * Return: 98 succeed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ret;
	size_t a = strlen(s1), b = strlen(s2), st = a + (n * b) + 1;

	if (st < b + 1)
		return (NULL);
	ret = malloc(st);

	if (ret == NULL)
		return (NULL);
	if (n >= b)
		strcpy(ret + a, s2);
	if (s2 == NULL)
		strcpy(ret + a, "");
	strcpy(ret, s1);
	strcpy(ret + a, s2);
	return (ret);
}
