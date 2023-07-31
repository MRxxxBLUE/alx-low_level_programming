#include "main.h"

/**
 * *_memset - print a constant byte
 * @s: area to put the constant
 * @b: constant
 * @n: max byte to use
 * return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int fix;

	for (fix = 0; n > 0; fix++, n--)
	{
		s[fix] = b;
	}

	return (s);
}
