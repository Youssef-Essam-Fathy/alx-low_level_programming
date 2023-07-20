#include "main.h"

/**
 *print_triangle - prints atriangle in the terminal
 *
 *@size: size of the triangle
 *
 * Return: void
 **/

void print_triangle(int size)
{
	int hi, bs;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (hi = 1; hi <= size; hi++)
		{
			for (bs = 1; bs <= size; bs++)
			{
				if ((bs + hi) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
