#include "main.h"
/**
 * reverse_array - Does nothing with void as arg
 * @a : a pointer
 * @n : another
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */
void reverse_array(int *a, int n)
{
	int l, h, i;

	for (l = 0, h = n - 1; l < h; l++, h--)
	{
		i = a[l];
		a[l] = a[h];
		a[h] = i;
	}
}
