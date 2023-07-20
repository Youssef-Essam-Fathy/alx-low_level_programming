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
	int lnch;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lnch = 1; lnch <= n; lnch++)
			_putchar('\\');
		_putchar('\n');
	}
}
