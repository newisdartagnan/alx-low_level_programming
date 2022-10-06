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
	int i, s;

	if (argv[1] == NULL)
		printf("%s\n", "0");
	for (i = 1; i < argc + 1; i++)
	{
		s = atoi(argv[i]) + atoi(argv[i + 1]);
		return (s);
		if (atoi(argv[i]) != 0 && atoi(argv[i]) != 1)
		{
			printf("%s\n", "Error");
			return (1);

		}
	}
	return (0);
}
