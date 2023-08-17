#include "variadic_functions.h"

/**
 * format_char - format a character
 * @separator: separator of the string
 * @ap: argument pointer
 **/

void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - format an integer
 * @separator: separator of the string
 * @ap: argument pointer
 **/

void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float - format a float
 * @separator: separator of the string
 * @ap: argument pointer
 **/

void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, int));
}

/**
 * format_string - format a string
 * @separator: separator of the string
 * @ap: argument pointer
 **/

void format_string(char *separator, va_list ap)
{
	char *s = va_arg(ap, char*);

	switch ((int)(s == 0))
	case 1:
		s = "(nil)";

	printf("%s%s", separator, s);
}

/**
 * print_all - prints anything.
 * @format: string
 **/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[i].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}
			j++
		}
		i++
	}
	printf("\n");
	va_end(ap);
}
