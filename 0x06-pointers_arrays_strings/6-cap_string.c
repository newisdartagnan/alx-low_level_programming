#include "main.h"
/**
 * cap_string - Does nothing with void as arg
 * @s : a pointer
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t')
			s[i] = toupper(s[i]);
	}
	return (s);
}
