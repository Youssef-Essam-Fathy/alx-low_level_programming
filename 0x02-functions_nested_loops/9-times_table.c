#include "main.h"

/**
 * times_table - a void function that prints 9 times table
 **/

void times_table(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 10; n1++)
	{
		for (n2 = 0; n2 <= 10; n2++)
		{
			_putchar((n1 * n2) + 48);
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
	}
}
