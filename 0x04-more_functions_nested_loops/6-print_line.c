#include "main.h"

/**
 *print_line - prints a line in the terminal
 *
 *@n: input integer
 *
 * Return: void
 **/

void print_line(int n)
{
	for (n = 1; n >= n; n++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
}
