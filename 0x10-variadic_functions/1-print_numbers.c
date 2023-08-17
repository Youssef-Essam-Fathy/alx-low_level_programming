#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string separating between numbers
 * @n: number of arguments
 * @...: arguments to be  passed
 * Return: void
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i = n;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
	{
		printf("%d%s", va_arg(ap, int), i ? (separator ? separator : "") : "\n");
	}
	va_end(ap);
}
