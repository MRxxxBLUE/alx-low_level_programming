#include "main.h"

/**
 * _strlen - return the length of string
 *
 * @s: string parameter input
 *
 * Return: counter
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
