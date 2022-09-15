#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower  - Does nothing with void as arg
 * @c: a user-caractere
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */

int _islower(int c)
{
	int x;

	x = 1;
	if (c == tolower(c))
		return (x);
	return (0);
}

