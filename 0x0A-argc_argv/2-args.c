#include <stdio.h>

/**
 * main - entry point
 * @argc: count of cmd_line args
 * @argv: array pointer
 * Return: always 0 (Succes)
 **/

int main(int argc, char *argv[])
{
	int indx;

	while (argc--)
	{
		printf("%s\n", argv[indx]);
		indx++;
	}

	return (0);
}
