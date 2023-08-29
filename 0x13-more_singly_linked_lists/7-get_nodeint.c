#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the head of the list
 * @index: the index of the node, starting at 0
 * Return: the nth node, or NULL if fails
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nod;
	unsigned int n;

	for (nod = head, n = 0; nod && n < index; nod = nod->next, n++)
		;
	return(nod);
}
