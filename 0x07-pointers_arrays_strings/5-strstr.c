#include "main.h"
/**
 * _strstr - does something at the memory
 * @haystack: a pointer
 * @needle: another
 * Return: a specific pointer
 */
char *_strstr(char *haystack, char *needle)
{
	long unsigned int i;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; i < strlen(haystack); i++)
	{
		if (*(haystack + i) == (*needle))
		{
			char *p = strstr(haystack + i + 1, needle + 1);

			return ((p) ? p - 1 : NULL);
		}
	}

	return (NULL);
}

