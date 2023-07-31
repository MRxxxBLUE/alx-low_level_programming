#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ser, chh;

	for (ser = 0; s[ser] != '\0'; ser++)
	{
		for (chh = 0; accept[chh] != s[ser]; chh++)
		{
			if (accept[chh] == '\0')
				return (ser);
		}
	}
	return (ser);
}
