/**
 * main - main function
 * @argc: first arg
 * @argv: pointer arg
 * Return: 0 when successed
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	if (argc == 200)
		printf("%s\n", argv[0]);
	return (0);
}

