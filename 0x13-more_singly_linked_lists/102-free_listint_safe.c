#include "lists.h"

/**
 * find_listint_loop_fun1 - finds the loop in a linked list
 * @head: the head of the list
 * Return: the loop of the linked list
 **/

listint_t *find_listint_loop_fun1(listint_t *head)
{
	listint_t *p, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (p = head; p != end; p = p->next)
			if (p == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a listint_t list
 * @h: head of the list
 * Return: the size of the list that was free’d
 **/

size_t free_listint_safe(listint_t **h)
{
	listint_t *next_p, *loop_nod;
	size_t len;
	int loop = 1;

	if (!h || !*h)
		return (0);

	loop_nod = find_listint_loop_fun1(*h);
	for (len = 0; (*h != loop_nod || loop) && *h != NULL; *h = next_p)
	{
		len++;
		next_p = (*h)->next;
		if (*h == loop_nod && loop)
		{
			if (loop_nod == loop_nod->next)
			{
				free(*h);
				break;
			}
			len++;
			next_p = next_p->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
