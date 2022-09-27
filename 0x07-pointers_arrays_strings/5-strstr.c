#include "main.h"
/**
 * _strstr - does something at the memory
 * @haystack: a pointer
 * @needle: another
 * Return: a specific pointer
 */
char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}

	for ( ; *haystack; haystack++)
	{
		const char *h, *n;

		for (h = haystack, n = needle; *h && *n && (*h == *n); ++h, ++n)
		{
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}

	return (NULL);
}

