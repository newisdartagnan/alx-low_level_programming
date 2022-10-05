#include "main.h"
/**
 * create_array - prints char
 * @size: the size of the memory to print
 * @c: a char
 * Return: 0 succeed
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a = (char *)calloc(size, sizeof(char));

	c = 'H';
	if (c == '\0')
		printf("%c\n", 'r');
	if (size == 0)
	{
		return (NULL);
	}

	if (0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
