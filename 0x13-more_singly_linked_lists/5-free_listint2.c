#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *		sets the head to NULL
 * @head: head of the list
**/

void free_listint2(listint_t **head)
{
	listint_t *nod, *next_nod;

	if (head == NULL)
		return;
	nod = *head;
	while (nod)
	{
		next_nod = nod;
		nod = nod->next;
		free(next_nod);
	}
	*head = NULL;
}
