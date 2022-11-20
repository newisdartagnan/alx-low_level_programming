#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints a name as is
 * @array: name of the person
 * @size: size_t
 * @action: function pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !size || !action)
		return;

	while (size--)
		action(*array++);

}
