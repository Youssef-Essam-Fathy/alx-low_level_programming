#include "function_pointers.h"

/**
 * main- Entry point
 * @argc: arguments count
 * @argv: argumennts value
 * Return: always 0 (Success)
 **/

int main(int argc, char **argv)
{
	char *ptr = (char *) main;
	int bytes;

	if (argc != 2)
		printf("Error\n"), exit(1);

	bytes = atoi(argv[1]);
	if (bytes < 0)
		printf("Error\n"), exit(2);

	while (b--)
		printf("%02hhx%s", *ptr++, bytes ? " " : "\n");
	return (0);
}
