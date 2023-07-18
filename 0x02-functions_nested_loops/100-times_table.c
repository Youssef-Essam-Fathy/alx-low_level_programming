#include "main.h"

/**
 * print_to_98 - a void function that prints to 98
 *
 * @n: a function integer parameter
 **/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count++)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count--)
			printf("%d, ", count);
	printf("98\n");
}
