#include "main.h"

/**
 *print_square - prints a square in the terminal
 *
 *@size: size of the square
 *
 * Return: void
 **/

void print_square(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
