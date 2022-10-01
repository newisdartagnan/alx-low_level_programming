#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isdigit  - Does nothing with void as arg
 * @c: a user-caractere
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */

int _isdigit(int c)
{
	int x;

	x = 1;
	if ((c >= 48) && (c < 58))
		return (x);
	return (0);
}


