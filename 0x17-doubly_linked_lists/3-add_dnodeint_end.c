#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: A pointer to the head of the doubly linked list
 * @n: The data value of the new node
 * Return: the address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNod, *current = *head;

	newNod = malloc(sizeof(dlistint_t));
	if (newNod == NULL)
		return (NULL);
	newNod->n = n;
	newNod->next = NULL;

	if (current)
	{
		while (current->next)
			current = current->next;
		newNod->prev = current;
		current->next = newNod;
	}
	else
	{
		*head = newNod;
		newNod->prev = NULL;
	}

	return (newNod);
}
