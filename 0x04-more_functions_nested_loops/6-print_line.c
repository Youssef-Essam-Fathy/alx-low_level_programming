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
	int lnchar;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lnnchar = 1; lnchar <= n; lnchar++)
			_putchar('_');
		_putchar('\n');
	}
}
