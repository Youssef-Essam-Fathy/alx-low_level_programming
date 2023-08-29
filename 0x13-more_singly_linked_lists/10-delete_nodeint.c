#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 *		of a listint_t linked list
 * @head: the head of the list
 * @index: the index of the list
 * Return: 1 if it succeeded, -1 if it failed
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nod, *prev_nod;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		nod = *head;
		*head = (*head)->next;
		free(nod);
		return (1);
	}
	nod = *head;
	while (nod)
	{
		if (i == index)
		{
			prev_nod->next = nod->next;
			free(nod);
			return (1);
		}
		i++;
		prev_nod = nod;
		nod = nod->next;
	}
	return (-1);
}
