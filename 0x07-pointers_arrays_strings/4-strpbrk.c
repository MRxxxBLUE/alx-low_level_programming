#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int ser, chh;
	char *p;

	ser = 0;
	while (s[ser] != '\0')
	{
		ser = 0;
		while (accept[chh] != '\0')
		{
			if (accept[chh] == s[ser])
			{
				p = &s[ser];
				return (p);
			}
			chh++;
		}
		ser++
	}

	return (0);
}



}
