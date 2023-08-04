#include <stdio.h>

/**
 * main - entry point
 * @argc: count of cmd_line args
 * @argv: array pointer
 * Return: always 0 (Succes)
 **/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
