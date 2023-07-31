#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int ser, s1 = 0, s2 = 0;

	for (ser = 0; ser < size; ser++)
	{
		s1 += a[ser];
		s2 += a[size - ser - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
