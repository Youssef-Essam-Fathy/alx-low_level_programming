#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *		and returns the head node’s data (n)
 * @head: head of the list
 * Return: the head node’s data (n)
 **/

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int n;

	if (head == NULL || !*head)
		return (0);

	pop = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = pop;
	return (n);
}

