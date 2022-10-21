#include "lists.h"
/**
 * add_node - check the code
 * @head: pointer to pointer to struct
 * @str: a pointer
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n = 0;

	new = malloc(sizeof(list_t));

	new->str = strdup(str);

	while (str[n])
		n += 1;
	if (new == NULL)
		return (NULL);
	new->len = n;
	new->next = *head;
	*head = new;

	return (*head);
}
