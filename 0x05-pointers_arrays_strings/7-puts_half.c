#include "main.h"

/**
 * puts_half - prints the socond half of the string and prints
 *		last n characters if n is odd
 *
 * @str: a string pointer input parameter
 *
 * Return: void
 **/

void puts_half(char *str)
{
	int i;

	/*finds the string length without null character*/
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
