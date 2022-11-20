#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a_int, b_int, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a_int = atoi(argv[1]);
	b_int = atoi(argv[3]);
	op = argv[2];
	if (b_int == 0)
	{
		printf("Error\n");
		exit(100);
	}
	
	if (!(get_op_func(op)))
	{
		printf("Error\n");
		exit(99);
	}
	result = (get_op_func(op))(a_int, b_int);
	printf("%d\n", result);

	return (0);
}
