#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isupper  - Does nothing with void as arg
 * @c: a user-caractere
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */

int _isupper(int c)
{
	int x;

	x = 1;
	if ((c == toupper(c) && (c != 0) && (c != 20)) && ((c >= 'A') && (c <= 'Z')))
		return (x);
	return (0);
}

