#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *	which contains a copy of the string given as a parameter
 * @str: string
 * Return: a pointer to character or NULL
 **/

char *_strdup(char *str)
{
	int indx = 0, len = 0;
	char *arr;

	if (str == NULL)
		return (NULL);

	for (; str[len] != '\0'; len++)
		;

	arr = malloc(len * sizeof(*len) + 1);

	if (arr == 0)
	{
		return (NULL);
	}
	else
	{
		for (; indx < len; indx++)
			arr[indx] = str[indx];
	}

	return (arr);
}
