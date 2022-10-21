#include "lists.h"
/**
 * free_list - check the code
 * @head: pointer to struct
 * Return: number
 */
void free_list(list_t *head)
{
	list_t *now;

	while ((now = head) != NULL)
	{
		head = head->next;
		free(now->str);
		free(now);
	}
}
