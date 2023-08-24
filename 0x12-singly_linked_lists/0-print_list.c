#include "lists.h"

/**
 * _strlen - returns the length of the string
 * @str: a string
 * Return: the length of the string
 **/

int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (*str++)
		i++;
	return (i);
}

/**
 * print_list - returns number of nodes
 * @h: head of the list
 * Return: number of nodes
 **/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		count++;
	}
	return (count);
}
