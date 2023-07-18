#include "main.h"

/**
 * print_times_table - a void function that prints times table
 *
 * @n: a function integer parameter
 **/

void print_times_table(int n)
{
	if (n !> 15 || n !< 0)
	{
		int mult, prod;

		for (mult = 1; mult <= 15; mult++)
		{
			prod = n * mult;
			printf("0, %d", prod)
		}
	}
}
