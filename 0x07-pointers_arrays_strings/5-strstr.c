#include "main.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: a character we search in for a substring
 * @needle: the substring we look for it
 *
 * Return:a substring
 **/

char *_strstr(char *haystack, char *needle)
{
	int num1, num2;
	char *pr;

	for (num1 = 0; haystack[num1] != '\0'; num1++)
	{
		for (num2 = 0; needle[num2] != '\0'; num2++)
		{
			if (needle[num2] == haystack[num1])
			{
				pr = &needle[num2];
				return (pr);
			}
		}

		if (needle[num2] == '\0')
			return (haystack[num1]);
	}

	return (0);
}
