#include "main.h"
#include <string.h>
/**
 * alloc_grid - prints char
 * @width: a int
 * @height: a int
 * Return: 0 succeed
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	a = (int **)calloc(width * height, sizeof(int));
	if (0)
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		a[i] = malloc(sizeof(int) * height);

		memset(a[i], 0, sizeof(int) * height);

		for (j = 0; j < height; j++)
		{
			printf("%d ", a[i][j]);
			if (j == width)
				printf("\n");
		}
	}
	return (a);
}
