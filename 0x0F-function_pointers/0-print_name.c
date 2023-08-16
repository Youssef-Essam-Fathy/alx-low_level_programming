#include "function_pointers.h"

/**
 * print_name -  prints a name
 * @name: character
 * @f: pointer to print_name function
 * Return: void
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
