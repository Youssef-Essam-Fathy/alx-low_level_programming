#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _isdigit - checks if character is digit
 * @ch: the character to check
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int ch)
{
	return (ch >= '0' && ch <= '9');
}

/**
 * _strlen - returns the length of a string
 * @str: the string whose length to check
 * Return: integer length of string
 */
int _strlen(char *str)
{
	int indx = 0;

	while (*str++)
		indx++;
	return (indx);
}

/**
 * big_multiply - multiply two big number strings
 * @str1: the first big number string
 * @str2: the second big number string
 * Return: the product big number string
 */
char *big_multiply(char *str1, char *str2)
{
	char *ptr;
	int l1, l2, a, b, c, x;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	ptr = malloc(a = x = l1 + l2);
	if (!ptr)
		printf("Error\n"), exit(98);
	while (a--)
		ptr[a] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(s1[l1]))
		{
			free(ptr);
			printf("Error\n"), exit(98);
		}
		a = s1[l1] - '0';
		c = 0;

		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(s2[l2]))
			{
				free(ptr);
				printf("Error\n"), exit(98);
			}
			b = s2[l2] - '0';

			c += r[l1 + l2 + 1] + (a * b);
			ptr[l1 + l2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			ptr[l1 + l2 + 1] += c;
	}
	return (ptr);
}


/**
 * main - multiply two big number strings
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
	char *r;
	int a, c, x;

	if (argc != 3)
		printf("Error\n"), exit(98);

	x = _strlen(argv[1]) + _strlen(argv[2]);
	r = big_multiply(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < x)
	{
		if (r[c])
			a = 1;
		if (a)
			_putchar(r[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
