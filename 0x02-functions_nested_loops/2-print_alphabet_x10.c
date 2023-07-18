#include "main.h"

/**
 * print_alphabet - use the _putchar function to print
 *		the alphabet a - z
 **/

void print_alphabet_x10(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		_putchar(ch * 10);
	}
	_putchar('\n');
}
