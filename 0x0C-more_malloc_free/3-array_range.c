#include "main.h"
#include <string.h>
/**
 * array_range - prints char
 * @min: a int
 * @max: a int
 * Return: 98 succeed
 */
int *array_range(int min, int max)
{
	int *ptr;

	ptr = malloc(min * max);

	if (min > max)
		return (NULL);
	if (!ptr)
		return (NULL);
	return (ptr);
}
