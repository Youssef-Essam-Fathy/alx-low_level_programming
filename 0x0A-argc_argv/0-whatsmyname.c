#include <stdio.h>

/**
 * main - Entry point
 * @argc: integer count parameter
 * @argv: char array pointer
 * Return: always 0 (Succes)
 **/

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
