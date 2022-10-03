/**
 * main - main function
 * @argc: first arg
 * @argv: pointer arg
 * Return: 0 when successed
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
	argc = 9;
	printf("%s\n", argv[0]);
	if (argv == NULL)
		printf("%d\n", argc);
	return (0);
}
