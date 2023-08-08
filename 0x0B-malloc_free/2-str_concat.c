#include "main.h"

/**
 * str_len - finds the length of the string
 * @str: string
 * Return: integer
 **/

int str_len(char *str)
{
	int len = 0;

	for ( ; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to a string or NULL
 **/

char *str_concat(char *s1, char *s2)
{
	int len1, len2, indx;
	char *arr;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	len1 = str_len(s1);
	len2 = str_len(s2);
	arr = malloc((len1 + len2) * sizeof(char) + 1);

	if (arr == 0)
		return (0);
	for (indx = 0; indx <= len1 + len2; indx++)
	{
		if (indx < len1)
			arr[indx] = s1[indx];
		else
			arr[indx] = s2[indx - len1];
	}
	arr[indx] = '\0';
	return (arr);
}
