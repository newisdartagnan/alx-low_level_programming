#include "main.h"
/**
 * print_rev_recursion - does something at the memory
 * @s: a pointer
 * Return: a specific pointer
 */
char print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		print_rev_recursion(s + 1);
	}
	return (*s);
}

/**
 * is_palindrome - does something at the memory
 * @s: a pointer
 * Return: a specific pointer
 */
int is_palindrome(char *s)
{
	if (strcmp(s, "") == 0)
		return (1);
	if (*s == print_rev_recursion(s))
	{
		return (1);
	}
	return (0);
}
