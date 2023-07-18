#include "main.h"

/**
 * print_to_98 - a void function that prints to 98
 *
 * @n: a function integer parameter
 **/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				_putchar(n);
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(n);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				_putchar(n);
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(n);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
