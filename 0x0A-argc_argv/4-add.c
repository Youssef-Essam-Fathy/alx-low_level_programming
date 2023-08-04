#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count of cmd_line args
 * @argv: array pointer
 * Return: always 0 (Succes)
 **/

int main(int argc, char *argv[])
{
	int add = 0;
	char *chr;

	while (--argc)
	{
		for (chr = argv[argc]; *chr; chr++)
		{
			if (*chr < '0' || *chr > '9')
				return (printf("Error\n"), 1);
		}
		add += atoi(argv[argc]);
	}
	printf("%d\n", add);
	return (0);
}
