#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

/**
 * main - does nothing with void as arg
 *
 * Return: a null value to destroy or stop program
 */

int main(void)

{
/* your code goes there */

	int x;

	for (x = 'A' ; x <= 'Z' ; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	return (0);
}
