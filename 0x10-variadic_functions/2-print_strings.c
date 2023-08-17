#include "variadic_functions.h"

/**
 * print_strings - prints numbers, followed by a new line
 * @separator: string separating between numbers
 * @n: number of arguments
 * @...: arguments to be  passed
 * Return: void
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *s;
	int i = n;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);

	while (i--)
	{
		printf("%s%s", (s = va_arg(ap, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
	}
	va_end(ap);
}
