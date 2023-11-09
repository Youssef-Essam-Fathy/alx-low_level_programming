#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: A pointer to the head of the doubly linked list
 * Return: the number of elements in a linked dlistint_t list
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t idx = 0;

	while (h != NULL)
	{
		h = h->next;
		idx++;
	}

	return (idx);
}
