#include "lists.h"
/**
 * add_node_end - check the code
 * @head: pointer to pointer to struct
 * @str: a pointer
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t n;

	new = malloc(sizeof(list_t));

	new->str = strdup(str);

	for (n = 0; str[n]; n++)
		;
	if (new == NULL)
		return (NULL);
	new->len = n;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
