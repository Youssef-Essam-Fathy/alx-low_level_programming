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
 * argstostr - concatenates all the arguments of the program
 * @ac: integer
 * @av: pointer to pointer character parameter
 * Return: a pointer to a new string or NULL
 **/

char *argstostr(int ac, char **av)
{
	int indx1 = 0, indx2 = 0, p = 0, tm = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; indx1 < ac; indx++, p++)
		p += str_len(av[indx]);

	str = malloc(sizeof(char) * p + 1);
	if (str == 0)
		return (NULL);

	for (indx1 = 0; indx1 < ac; indx1++)
	{
		for (indx2 = 0; av[indx1][indx2] != '\0'; indx2++, tm++)
			str[tm] = av[indx1][indx2];

		str[tm] = '\n';
		tm++;
	}
	str[tm] = '\0';
	return (str);
}
