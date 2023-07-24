#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: A pointer
 *
 * Return: void
 **/

void rev_string(char *s)
{
	int l, i;
	char temp;

	/*find string length without null character*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/*swap the string by looping to its half*/
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1  - i];/*1 as the array starts at 0*/
		s[l - 1  - i] = temp;
	}
}
