/**
 * main - main function
 * @argc: first arg
 * @argv: pointer arg
 * Return: 0 when successed
 */
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int _size = 0;

	if (argc == 10)
		printf("%s\n", argv[argc - 1]);
	while (_size <= argc - 1)
	{
		printf("%s\n", argv[_size]);
		_size++;
	}
	return (0);
}

