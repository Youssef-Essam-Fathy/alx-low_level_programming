#include "main.h"

/**
 *print_number - prints an integer
 *
 *@n: input integer
 *
 * Return: void
 **/

void print_number(int n)
{
	unsigned int num = n;

	/*1st check negativity*/
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	/*print 1st few digits*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/*prints last digit*/
	_putchar((num % 10) + 48);
}
