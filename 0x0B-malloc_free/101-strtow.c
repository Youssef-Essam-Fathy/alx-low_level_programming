#include "main.h"

/**
 * word_count - counts the number of words in a string
 * @str: string
 * Return: integer of number of words
 **/

int word_count(char *str)
{
	int indx, num = 0;

	for (indx = 0; str[indx]; indx++)
	{
		if (str[indx] == ' ')
		{
			if (str[indx + 1] != ' ' && str[indx + 1] != '\0')
				num++;
		}
		else if (indx == 0)
			num++;
	}
	num++;
	return (num);
}

/**
 * strtow - returns a pointer to an array of strings (words)
 * @str: string
 * Return: a pointer to an array of string or NULL
 **/

char **strtow(char *str)
{
	int indx, indx1, t, f, m = 0, x = 0;
	char **ary;

	if (str == NULL || *str == '\0')
		return (NULL);
	m = word_count(str);
	if (m == 1)
		return (NULL);
	ary = (char **)malloc(m * sizeof(char *));
	if (ary == NULL)
		return (NULL);
	ary[m - 1] = NULL;
	indx = 0;
	while (str[indx])
	{
		if (str[indx] != ' ' && (indx == 0 || str[indx - 1] == ' '))
		{
			for (indx1 = 1; str[indx + indx1] != ' ' && str[indx + indx1]; indx1++)
				;
			indx1++;
			ary[x] = (char *)malloc(indx1 * sizeof(char));
			indx1--;
			if (ary[x] == NULL)
			{
				for (t = 0; t < x; t++)
					free(ary[t]);
				free(ary[m - 1]);
				free(ary);
				return (NULL);
			}
			for (f = 0; f < indx1; f++)
				ary[x][f] = str[indx + f];
			ary[x][f] = '\0';
			x++;
			indx += indx1;
		}
		else
			i++;
	}
	return (ary);
}
