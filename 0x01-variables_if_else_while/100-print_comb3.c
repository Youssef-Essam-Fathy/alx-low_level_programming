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
	int num1 = 48, num2;

	while (num1 <= 57)
	{
		num2 = 48;
		while (num2 <= 57)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar(num1);
				putchar(num2);
			if (num1 != 8 || num2 != 9)
			{
			putchar(',');
			putchar(' ');
			}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
