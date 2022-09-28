#include "main.h"

/**
 * print_chessboard - intention is to print a chess board
 * @a: input pointer
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (a[i][7])
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
		i++;
	}
}
