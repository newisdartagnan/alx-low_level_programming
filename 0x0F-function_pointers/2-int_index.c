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
	int i;

	for (i = 0; i < size; i++)
		if (cmp(*(array + i)))
			return (i);
	if (size <= 0)
		return (-1);
	return (-1);
}
