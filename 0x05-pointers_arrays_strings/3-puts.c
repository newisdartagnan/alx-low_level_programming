#include "main.h"
/**
 * _puts - Does nothing with void as arg
 * @str: pointer
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 **/
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		puts(str);
		i++;
	}
	_putchar('\n');
}
