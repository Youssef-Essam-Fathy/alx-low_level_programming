#include "main.h"

/**
 *more_numbers - prints the numbers from 0 to 14
 *		for 10 times followed by a new line
 *
 * Return: void
 **/

void more_numbers(void)
{
	int num, line, count;

	for (line = 1; line <= 10; line++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putxhar('\n');
	}
}
