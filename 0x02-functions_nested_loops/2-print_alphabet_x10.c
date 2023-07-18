#include "main.h"

/**
 * print_alphabet_x10 - use the _putchar function to print
 *              the alphabet a - z 10 times
 **/
void print_alphabet_x10(void)
{
int line, ch;
for (line = 0; line <= 9; line++)
{
for (ch = 97; ch <= 122; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
