#include "lists.h"
/**
 * print_list - check the code
 * @h: pointer to struct
 * Return: number
 */


size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n += 1; 
	}
	return (n);
}
