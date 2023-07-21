#include <stdio.h>

/**
 *_sqrt - finds the square root
 *
 *@a: input number
 *
 * Return: j
 **/

double _sqrt(double a)
{
	double i = 0;
	double j = a / 2;

	while (j != i)
	{
		i = j;
		j = (a / i + i) / 2;
	}

	return (j);
}

/**
 *largest_prime_factor - prints the largest prime factor
 *
 *@num: a long integer value to find
 *
 * Return: void
 **/

void largest_prime_factor(long int num)
{
	int primNum, largest;

	/*First divide with the smallest prime number (2)*/
	while (num % 2 == 0)
		num /= 2;

	/*num must be odd so we proceed to the next prime number (3)*/
	for (primNum = 3; primNum <= _sqrt(num); primNum += 2)
	{
		while (num % primNum == 0)
		{
			num = num / primNum;
			largest = primNum;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 *main - entry point
 *
 * Return: always 0 (Success)
 **/

int main(void)
{
	largest_prime_factor(612852475143);
}
