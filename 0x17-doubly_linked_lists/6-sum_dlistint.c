#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data (n) of a linked list
 * @head: A pointer to the head of the doubly linked list
 * Return: sum of all (n) in the list or 0 if list is empty
 **/
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
