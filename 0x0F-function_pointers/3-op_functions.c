#include <stdio.h>
#include "function_pointers.h"

/**
 * op_add - op between a and b
 * @a: int
 * @b: int
 * Return: something op.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - op between a and b
 * @a: int
 * @b: int
 * Return: something op.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - op between a and b
 * @a: int
 * @b: int
 * Return: something op.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - op between a and b
 * @a: int
 * @b: int
 * Return: something op.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - op between a and b
 * @a: int
 * @b: int
 * Return: something op.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
