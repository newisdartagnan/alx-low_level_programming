#include "main.h"
/**
 * main - main function
 * @argc: first arg
 * @argv: pointer arg
 * Return: 0 when successed
 */
#include <stdio.h>
#include <stdint.h>
int main(int argc, char *argv[])
{
	char *a = argv[1];
	char *b = argv[2];
	int p, q, s;

	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("%s\n", "Error");
		return (1);
	}
	if (argv == NULL)
		printf("%d\n", argc);
	else
	{
		p = atoi(a);
		q = atoi(b);
		s = p * q;
		printf("%d\n", s);
	}
	return (0);
}

