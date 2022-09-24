#include "main.h"
/**
 * string_toupper - Does nothing with void as arg
 * @s : a pointer
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = (int)s[i] - 32;
	}
	return (s);
}
