#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: A pointer to the head of the doubly linked list
 * @index: index of node we need to get
 * Return: the nth node of list or NULL if the node does not exist
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int id = 0;

	while (head)
	{
		if (id == index)
			return (head);
		head = head->next;
		id++;
	}
	return (NULL);
}
