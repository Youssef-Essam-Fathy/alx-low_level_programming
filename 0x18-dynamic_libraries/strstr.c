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
	int num;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		num = 0;
		if (needle[num] == haystack[num])
		{
			do {
				if (needle[num + 1] == '\0')
					return (haystack);
				num++;
			} while (haystack[num] == needle[num]);
		}
		haystack++;
	}

	return (0);
}
