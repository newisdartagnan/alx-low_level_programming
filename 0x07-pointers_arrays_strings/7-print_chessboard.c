#include "main.h"
/**
 * print_chessboard - does something at the memory
 * @a: a pointer
 * Return: a specific pointer
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			a[i][j] = ' ';
		}
	}
}

