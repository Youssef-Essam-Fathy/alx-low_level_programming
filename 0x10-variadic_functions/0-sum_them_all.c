#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: numbber of arguments
 * Return: sum of all arguments
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	int i, sum = 0;

	va_start(ap, n); /* intialize the argument list */
	if (n == 0)

		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int); /* get the next argument value */

	av_end(ap); /* clean up */
	return (sum);
}
