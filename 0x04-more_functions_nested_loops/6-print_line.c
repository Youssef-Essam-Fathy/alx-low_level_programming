#include "main.h"

/**
 *print_line - prints a straight line in the terminal
 *
 *@n: input integer
 *
 * Return: void
 **/

void print_line(int n)
{
	int lnch;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lnch = 1; lnch <= n; lnch++)
			_putchar('_');
		_putchar('\n');
	}
}
