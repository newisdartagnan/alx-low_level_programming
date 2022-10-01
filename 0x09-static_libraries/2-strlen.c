#include "main.h"
/**
 * _strlen - Does nothing with void as arg
 * @s: pointer
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 **/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
