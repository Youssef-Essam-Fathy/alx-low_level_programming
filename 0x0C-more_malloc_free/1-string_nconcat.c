#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer string
 * @s2: pointer string
 * @n: positive integer
 * Return: a pointer to character
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int indx, indx1, s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	s = malloc(s1_len + n + 1);

	if (s == NULL)
		return (NULL);

	for (indx = 0; s1[indx] != '\0'; indx++)
		s[indx] = s1[indx];
	for (indx2 = 0; indx2 < n; indx2++)
	{
		s[indx] = s2[indx2];
		indx++;
	}
	s[indx] = '\0';
	return (s);
}
