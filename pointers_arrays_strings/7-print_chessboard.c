#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 *
 * @a: plateau de fromages.
 *
 */

void print_chessboard(char (*a)[8])
{
	int lin;
	int col;

	for (lin = 0; lin < 8; lin++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[lin][col]);
		}
		_putchar('\n');
	}
}
