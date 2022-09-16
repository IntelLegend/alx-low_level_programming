#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: length
 */

void print_diagonal(int n)
{
	int column, space, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (column = 0; column < n; column++)
		{
			i = column - 1;

			for (space = 0; space <= i; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
