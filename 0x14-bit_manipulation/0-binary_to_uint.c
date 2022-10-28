#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: const char
 * Return: a integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, count;

	if (b == NULL)
		return (0);

	num = count = 0;
	while (b[count])
	{
		if (b[count] > '1')
			return (0);
		else if (b[count] == '1')
		{
			num <<= 1;
			num += 1;
		}
		else
			num <<= 1;
		count++;
	}
	return (num);

}
