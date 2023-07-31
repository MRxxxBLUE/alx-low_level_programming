#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int ser, chh;

	for (ser = 0; ser < 8; ser++)
	{
		for (chh = 0; chh < 8; chh++)
		{
			_putchar(a[ser][chh]);
		}
		_putchar('\n');
	}
}
