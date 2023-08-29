#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: the head of the list
 * Return: a pointer to the first node of the reversed list
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nod, *next_nod;

	if (!head || !*head)
		return (NULL);

	nod = *head;
	*head = NULL;
	while (nod)
	{
		next_nod = nod->next;
		nod->next = *head;
		*head = nod;
		nod = next_nod;
	}
	return (*head);
}
