#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet - use the _putchar function to print
 *		the alphabet a - z
 *
 * Return: Always 0 (success)
 **/

int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
