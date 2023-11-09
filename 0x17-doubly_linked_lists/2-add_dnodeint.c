#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list
 * @head: A pointer to the head of the doubly linked list
 * @n: The data value of the new node
 * Return: the address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNod = malloc(sizeof(dlistint_t));

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
	newNod->prev = NULL;
	if (!*head)
	{
		*head = newNod;
		newNod->next = NULL;
	}
	else
	{
		newNod->next = *head;
		(*head)->prev = newNod;
		*head = newNod;
	}
	return (newNod);
}
