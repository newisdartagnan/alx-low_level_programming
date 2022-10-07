#include "main.h"
#include <string.h>
/**
 * _calloc - prints char
 * @nmemb: int
 * @size: int
 * Return: 98 succeed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == 0)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
