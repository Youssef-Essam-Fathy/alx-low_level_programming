#include "main.h"

/**
 * is_prime_number -  returns 1 if the input integer is a prime number,
 *			otherwise return 0
 *
 * @othrin: integer
 * @in: number to be checked
 *
 * Return: 1 or 0
 **/

int chk_prim(int in, int othrin);
int is_prime_number(int n)
{
	return (chk_prim(in, 2));
}

/**
 * chk_prim - check all numbers < in if they could divide it
 *
 * @in: integer
 * @othrin: integer
 *
 * Return: integer value
 **/

int chk_prim(int in, int othrin)
{
	if (othrin >= in && in > 1)
		return (1);
	else if (in % othrin == 0 || in <= 1)
		return (0);
	else
		return (chk_prim(in, othrin + 1));
}
