#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'A program to print a string output
 *
 * Return: Always 0 (success)
 **/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
	{
		putchar(str[ch]);
	}
	putchar('\n');
	return (0);
}
