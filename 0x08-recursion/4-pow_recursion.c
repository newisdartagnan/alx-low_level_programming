#include "main.h"
/**
 * _pow_recursion - does something at the memory
 * @x: an int
 * @y: an int
 * Return: a specific pointer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (x == 0)
		return (0);
	return (x * _pow_recursion(x, y - 1));
}
