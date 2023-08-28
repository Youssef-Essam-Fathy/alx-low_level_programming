#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head of the list
 * @n: data of the node
 * Return: the address of the new element
 *	, or NULL if it failed
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *size_new = malloc(sizeof(listint_t));
	listint_t *size;

	if (!head || !size_new)
		return (NULL);

	size_new->next = NULL;
	size_new->n = n;
	if (!*head)
		*head = size_new;
	else
	{
		size = *head;
		while (size->next)
			size = size->next;
		size->next = size_new;
	}
	return (size_new);
}
