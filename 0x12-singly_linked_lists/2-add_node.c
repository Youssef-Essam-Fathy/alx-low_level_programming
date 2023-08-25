#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of the list
 * @str: string
 * Return: list size
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_size = malloc(sizeof(list_t));

	if (!head || !new_size)
		return (NULL);
	if (str)
	{
		new_size->str = strdup(str);
		if (!new_size->str)
		{
			free(new_size);
			return (NULL);
		}
		new_size->len = _strlen(new_size->str);
	}

	new_size->next = *head;
	*head = new_size;
	return (new_size);
}
