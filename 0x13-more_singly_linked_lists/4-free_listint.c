#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: the head of the list
 * Return: void
 **/

void free_listint(listint_t *head)
{
	listint_t *nod, *next_nod;

	if (head == NULL)
		return;
	nod = head;
	while (nod)
	{
		next_nod = nod->next;
		free(nod);
		nod = next_nod;
	}
}
