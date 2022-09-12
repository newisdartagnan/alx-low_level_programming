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

	int x, y;

	x = y = 48;

	while (y <= 57)
	{
		x = 48;

		while (x <= 57)
		{
			if (y != x && y < x)
			{
				putchar(y);
				putchar(x);
				if (y == 56 && x == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			x++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}
