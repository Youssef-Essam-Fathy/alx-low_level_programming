#include "main.h"

/**
 * lst_indx - returns the last index of a string
 *
 * @s: a string pointer
 *
 * Return: integer value
 **/

int is_palindrome(char *s);
int chk(char *str, int strt, int endd, int modd);
int lst_indx(char *str)
{
	int num = 0;

	if (*str > '\0')
	{
		num += lst_indx(s + 1) + 1;
	}

	return (num);
}

/**
 * is_palindrome - checks if the string is a palindrome
 *
 * @s: a string
 *
 * Return: integer value
 **/

int is_palindrome(char *s)
{
	int endd = lst_indx(s);

	return (chk(s, 0, endd - 1, endd % 2));
}

/**
 * chk - checking for the palindrome
 *
 * @str: string
 * @strt: integer start value
 * @endd: integer end value
 * @modd: the % value
 *
 * Return: 0 or 1
 **/

int chk(char *str, int strt, int endd, int modd)
{
	if ((strt == endd && modd != 0) || (strt == endd + 1 && modd == 0))
		return (1);
	else if (str[strt] != str[endd])
		return (0);
	else
		return (chk(str, strt + 1, endd - 1, modd));
}
