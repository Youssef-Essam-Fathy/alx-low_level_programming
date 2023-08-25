#include "lists.h"

/**
 * free_list - free all list nodes
 * @head: head of the list
 * Return: void
 **/

void free_list(list_t *head)
{
	list_t *nod, *nod_next;

	if (!head)
		return;
	nod = head;
	while (nod)
	{
		nod_next = nod->next;
		free(nod->str);
		free(nod);
		nod = nod_next;
	}
}
