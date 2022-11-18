#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
/**
 * puts_half - Does nothing with void as arg
 * @str: pointer
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 **/
void puts_half(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (!(len % 2))
		len /= 2;
	else
		len = (len + 1) / 2;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');

}
