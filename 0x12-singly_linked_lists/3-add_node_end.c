#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: head of the list
 * @str: string
 * Return: list size
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	lis_t *node_new = malloc(sizeof(list_t));
	list_t *nod = *head;

	if (!head || !node_new)
		return (NULL);
	if (str)
	{
		node_new->str = strdup(str);
		if (!node_new->str)
		{
			free(node_new);
			return (NULL);
		}
		node_new->len = _strlen(node_new->str)
	}
	if (nod)
	{
		while (nod->next)
			nod = nod->next;
		nod = node_new;
	}
	else
		*head = node_new;
	return (node_new);
}
