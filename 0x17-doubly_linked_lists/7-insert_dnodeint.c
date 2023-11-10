#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: A pointer to the head of the doubly linked list
 * @idx: index of node we need to insert
 * @n: integer number of new node
 * Return: the address of the new node, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNod, *temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	newNod = malloc(sizeof(dlistint_t));
	if (newNod == NULL)
		return (NULL);

	newNod->n = n;
	newNod->prev = temp;
	newNod->next = temp->next;
	temp->next->prev = newNod;
	temp->next = newNod;

	return (newNod);
}
