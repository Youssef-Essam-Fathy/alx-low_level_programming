#include "main.h"

/**
 *print_diagonal - prints a diagonal in the terminal
 *
 *@n: input integer
 *
 * Return: void
 **/

void print_diagonal(int n)
{
	int diagchr, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (diagchr = 1; diagchr <= n; diagchr++)
		{
			for (space = 1; space < diagchr; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
