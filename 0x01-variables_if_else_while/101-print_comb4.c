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

	int x, y, z;

	x = y = z = 48;

	while (z <= 57)
	{
		y = 48;
		while (y <= 57)
		{
			x = 48;
			while (x <= 57)
			{
				if (z != y && z < y && y != x && y < x && x != z && x > z)
				{
					putchar(z);
					putchar(y);
					putchar(x);
					if (z == 55 && y == 56 && x == 57)
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
		z++;
	}
	putchar('\n');
	return (0);
}


