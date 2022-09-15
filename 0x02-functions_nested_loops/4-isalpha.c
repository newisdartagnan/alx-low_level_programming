#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha  - Does nothing with void as arg
 * @c: a user-caractere
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */

int _isalpha(int c)
{
	int x;

	x = 1;
	if ((97 <= c && 122 >= c) && (65 <= c && 90 >= c))
		return (x);
	return (0);
}
