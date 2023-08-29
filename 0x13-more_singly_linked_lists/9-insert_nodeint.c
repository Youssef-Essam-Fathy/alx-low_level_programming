#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the head of the list
 * @idx: the index of the list
 * @n: data of the list
 * Return: the address of the new node, or NULL if it failed
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nod, *new_nod = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !new_nod)
		return (NULL);

	new_nod->n = n;
	new_nod->next = NULL;
	if (!idx)
	{
		new_nod->next = *head;
		*head = new_nod;
		return (new_nod);
	}
	nod = *head;
	while (nod)
	{
		if (i == idx - 1)
		{
			new_nod->next = nod->next;
			nod->next = new_nod;
			return (new_nod);
		}
		i++;
		nod = nod->next;
	}
	free(new_nod);
	return (NULL);
}
