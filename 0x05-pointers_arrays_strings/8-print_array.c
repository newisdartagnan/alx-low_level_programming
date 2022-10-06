#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
/**
 * print_array - Does nothing with void as arg
 * @a: pointer
 * @n: a int
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 **/
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		bool is_last = (j + 1) == n;

		printf("%d", a[j]);

		if (!is_last)
		{
			printf(", ");
		}
	}
	printf("\n");
}
