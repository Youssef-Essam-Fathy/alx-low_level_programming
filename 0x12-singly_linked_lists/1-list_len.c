#include "lists.h"

/**
 * list_len - returns length of elements in a linked list
 * @h: head of the list
 * Return: number of elements in a linked list
 **/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
