#include <stdio.h>
#include "main.h"
/**
 * print_alphabet  - Does nothing with void as arg
 *
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */

void print_alphabet(void)
{
	int x;

	x = 'a';
	while (x <= 'z')
	{
	_putchar(x);
	x++;
	}
	_putchar('\n');
}
/**
 * main - Brief description of function.
 * Return: Describe the return value of function_name.
 *
 * The return value description can also have multiple paragraphs, and should
 * be placed at the end of the comment block.
 */

int main(void)
{
	print_alphabet();
	return (0);
}
