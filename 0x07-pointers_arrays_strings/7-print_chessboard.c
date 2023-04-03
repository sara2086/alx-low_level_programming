#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 * Return: void
*/
void print_chessboard(char (*a)[8])
{
	int l, j;

	for (l = 0; l < 8; l++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(*(l + a) + j));
		}
		_putchar('\n');
	}
}
