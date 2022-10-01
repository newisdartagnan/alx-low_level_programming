#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _abs  - Does nothing with void as arg
 * @x: a user-caractere
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */

int _abs(int x)
{
	return ((unsigned int)((x < 0) ? -x : x));
}

