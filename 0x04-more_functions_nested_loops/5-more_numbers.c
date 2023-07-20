#include "main.h"

/**
 *more_numbers - prints the numbers from 0 to 14
 *		for 10 times followed by a new line
 *
 * Return: void
 **/

void more_numbers(void)
{
	int num1, num2, count;

	for (count = 0; count <= 9; count++)
	{
		for (num1 = 48; num1 <= 57; num1++)
		{
			_putchar(num1);
		}
		for (num2 = 48; num2 <= 52; num2++)
		{
			_putchar('1');
			_putchar(num2);
		}
	}
}
