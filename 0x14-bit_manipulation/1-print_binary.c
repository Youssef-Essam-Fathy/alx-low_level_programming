#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to display
 * Return: void
 **/

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, displayed = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			displayed++;
		}
		else if (displayed)
			_putchar('0');
	}
	if (!displayed)
		putchar('0');
}

