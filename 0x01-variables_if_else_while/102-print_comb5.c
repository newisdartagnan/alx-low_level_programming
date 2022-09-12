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
	int x, y, z, w;

	x = y = z = w = 48;

	while (w <= 57)
	{
		z = 48;
		while (z <= 57)
		{
			y = 48;
			while (y <= 57)
			{
				x = 48;
				while (x <= 57)
				{
					if ((z <= y) && (w <= y) && (z < x))
					{
						putchar(w);
						putchar(z);
						putchar(' ');
						putchar(y);
						putchar(x);
						if ((w == 57) && (y == 57) && (x == 57) && (z == 56))
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
		w++;
	}
	putchar('\n');
	return (0);
}


