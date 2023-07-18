#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'A program to print alphabets
 *
 * Return: Always 0 (success)
 **/

void print_alphabet(void);
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
/*print_alphabet - this is my function description*/
void print_alphapet(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
}
