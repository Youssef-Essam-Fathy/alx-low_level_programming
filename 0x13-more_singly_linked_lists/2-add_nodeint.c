#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head of the list
 * @n: data of the node
 * Return: the address of the new element
 *	, or NULL if it failed
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *size_new = malloc(sizeof(listint_t));

	if (!head || !size_new)
		return (NULL);

	size_new->next = NULL;
	size_new->n = n;
	if (*head)
		size_new->next = *head;
	*head = size_new;
	return (size_new);
}
