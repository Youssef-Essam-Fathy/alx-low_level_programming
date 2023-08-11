#include "main.h"
#include <string.h>

/**
 * _puts - prints out a string
 *	followed by a new line
 * @st: string
 * Return: void
 **/

void _puts(char *st)
{
	int indx = 0;

	while (st[indx])
	{
		_putchar(st[indx]);
		indx++;
	}
}

/**
 * _atoi - convert the string to integer
 * @str: string
 * Return: integer value
 **/

int _atoi(const char *str)
{
	int sin = 1;
	unsigned long int rsp = 0, frst_num, indx;

	for (frst_num = 0; !(str[frst_num] >= 48 && str[frst_num] <= 57); frst_num++)
	{
		if (str[frst_num] == '-')
		{
			sin *= -1;
		}
	}

	for (indx = frst_num; str[indx] >= 48 && str[indx] <= 57; indx++)
	{
		rsp *= 10;
		rsp += (str[indx] - 48);
	}

	return (sin * rsp);
}

/**
 * print_int - print integer
 * @num: integer
 * Return: void
 **/

void print_int(unsigned long int num)
{
	unsigned long int div = 1, indx, rsp;

	for (indx = 0; num / div > 9; indx++, div *= 10)
		;

	for (; div >= 1; num %= div, div /= 10)
	{
		rsp = num / div;
		_putchar('0' + rsp);
	}
}

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments value
 * Return: always 0 (Success)
 **/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
