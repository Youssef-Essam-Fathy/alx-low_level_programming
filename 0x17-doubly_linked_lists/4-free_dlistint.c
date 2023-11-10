#include "lists.h"

/**
 * free_dlistint - free thhe  linkedd list
 * @head: poiinter to head of the list
 * Return: void
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nod;

	while (head)
	{
		nod = head;
		head = head->next;
		free(nod);
	}
}
