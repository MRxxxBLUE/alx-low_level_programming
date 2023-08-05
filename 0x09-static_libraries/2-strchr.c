#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{

	int loc;

	for (loc = 0; s[loc] >= '\0' ; loc++)
	{
		if (s[loc] == c)
		{
			return (s + loc);
		}
	}

	return ('\0');
}
