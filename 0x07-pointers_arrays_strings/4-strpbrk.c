#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
		int ser;

		while (*s)
		{
			for (ser = 0; accept[ser]; ser++)
			{
			if (*s == accept[ser])
			return (s);
			}
		s++;
		}

	return ('\0');
}
