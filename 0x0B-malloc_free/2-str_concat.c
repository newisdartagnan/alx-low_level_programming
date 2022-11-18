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
	int a, b, c;
	char *str;

	a = b = 0;
	if (s1 != NULL)
		for (a = 0; s1[a]; a++)
			;
	if (s2 != NULL)
		for (b = 0; s2[b]; b++)
			;

	str = malloc(sizeof(char) * (a + b + 1));
	if (str == NULL)
		return (NULL);

	c = 0;
	while (c < (a + b))
	{
		if (c < a)
			str[c] = s1[c];
		else
			str[c] = s2[c - a];

		c++;
	}
	str[c] = 0;

	return (str);

}
