#include "main.h"
/**
 * print_diagsums - does something at the memory
 * @a: a pointer
 * @size: another
 * Return: a specific pointer
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, l, m, s1, s2;

	l = 0;
	i = 0;
	s1 = 0;
	s2 = 0;
	k = 0;
	j = 1;
	m = size - 1;

	for (l = 0; l <= size; l++)
	{
		s1 += *(a + i);
		s2 += *(a + i + j);
		i += m;
		k += m - j;
		j++;
	}
	printf("%d, %d\n", s2, s1);

}
