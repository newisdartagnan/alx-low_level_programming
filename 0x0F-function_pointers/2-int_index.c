#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - prints a name as is
 * @array: name of the person
 * @size: size_t
 * @cmp: function pointer
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	index = size;
	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);

	while (size--)
	{
		if (cmp(array[index - size]))
			return (index - size);
	}

	return (-1);

}
