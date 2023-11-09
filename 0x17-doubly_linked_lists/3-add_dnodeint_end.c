#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: A pointer to the head of the doubly linked list
 * @n: The data value of the new node
 * Return: the address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNod = malloc(sizeof(dlistint_t)), *nod;

	if (!head || !newNod)
	{
		if (newNod)
		{
			free(newNod);
			return (NULL);
		}
		return (NULL);
	}
	newNod->n = n;
	newNod->next = NULL;
	if (!*head)
	{
		newNod->prev = NULL;
		*head = newNod;
		return (newNod);
	}
	else
	{
		nod = *head;

		while (nod->next)
			nod = nod->next;

		nod->next = newNod;
		nod->prev = nod;
	}

	return (newNod);
}
