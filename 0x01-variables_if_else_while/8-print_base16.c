#include <stdlib.h>
#include <time.h>

/* more headers goes there */

#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* your code goes there */
	int i = 48;

	while (i <= 102)
	{
		putchar(i);
		if (i == 57)
			i += 39;
		i++;
	}
	putchar('\n');
	return (0);
}
