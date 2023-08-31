#include "main.h"

/**
 * clear_bit - returns the number of bits you would need to flip
 *	to get from one number to another
 * @n: first number to display
 * @m: second number to display
 * Return: the number of bits you would need to flip
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR_val = n ^ m;
	unsigned int num = 0;

	while (XOR_val)
	{
		if (XOR_val & 1ul)
			num++;
		XOR_val = XOR_val >> 1;
	}
	return (num);
}
