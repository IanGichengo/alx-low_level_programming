#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: parameter
 */

void print_chessboard(char (*a)[8])
{
	int k, p;

	for (k = 0; a[k][7]; k++)
	{
		for (p = 0; p < 8; p++)
			_putchar(a[k][p]);
		_putchar('\n');
	}
}
