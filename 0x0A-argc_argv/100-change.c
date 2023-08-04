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
	if (argc == 2)
	{
		int indx, l_cents = 0, pound = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (indx = 0; indx < 5; indx++)
		{
			if (pound >= cents[indx])
			{
				l_cents += pound / cents[indx];
				pound = pound % cents[indx];
				if (pound % cents[indx] == 0)
					break;
			}
		}
		printf("%d\n", l_cents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
