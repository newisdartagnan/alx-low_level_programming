#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_last_digit - Does nothing with void as arg
 * @x: a user-caractere
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */

int print_last_digit(int x)
{
	int d;

	d = x % 10;
	return ((unsigned int)((d < 0) ? -d : d));
}
