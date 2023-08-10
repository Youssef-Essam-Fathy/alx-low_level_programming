#include "main.h"

/**
 * mem_set - set constant bytes to memory to be filled
 * @str: pointer to string
 * @ch: character
 * @num: +ve integer
 * Return: a pointer to string
 **/

char *mem_set(char *str, char ch, unsigned int num)
{
	char *p = str;

	while (num--)
		*str++ = ch;

	return (p);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: positive integer
 * @size: positive integer
 * Return: a pointer to the allocated memory or NULL
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(sizeof(int) * nmemb);

	if (ptr == 0)
		return (NULL);

	mem_set(ptr, 0, sizeof(int) * nmemb);

	return (ptr);
}
