#include "main.h"

/**
 *_islower - use the _islower function to check
 *              for lowercase characters
 *@c: a function input checker
 *
 *Return: returns 1 if 'c' is lowercase
 *         otherwise always 0 (Success)
 **/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
