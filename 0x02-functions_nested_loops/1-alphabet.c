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
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
