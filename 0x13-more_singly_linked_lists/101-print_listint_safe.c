#include "lists.h"

/**
 * _re - reallocate memory for an array of pointers
 * @c_l: the current list
 * @size: size of the list
 * @n_l: the new list
 * Return: pointer to the new list
 **/

const listint_t **_re(const listint_t **c_l, size_t size, const listint_t *n_l)
{
	const listint_t **new;
	size_t i;

	new = malloc(size * sizeof(listint_t *));
	if (new == NULL)
	{
		free(c_l);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		new[i] = c_l[i];
	new[i] = n_l;
	free(c_l);
	return (new);
}


/**
 * print_listint_safe - prints a listint_t linked list
 * @head: the head of the list
 * Return: the number of nodes in the list
 **/

size_t print_listint_safe(const listint_t *head)
{
	size_t i, n = 0;
	const listint_t **current_list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (head == current_list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(current_list);
				return (n);
			}
		}
		n++;
		current_list = _re(current_list, n, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(current_list);
	return (n);
}
