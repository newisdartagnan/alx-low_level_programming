#include "main.h"
/**
 * positive_or_negative - does nothing with void as arg
 * @i : an integer
 * Return: a null value to destroy or stop program
 */
void positive_or_negative(int i)
{
	srand(time(0));

	i = rand() - RAND_MAX / 2;
	if (i > 0)
		printf("%d is positive\n", i);
	else
		if (i == 0)
			printf("%d is zero\n", i);
		else
			printf("%d is negative\n", i);

}
