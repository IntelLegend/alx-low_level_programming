#include "main.h"

/**
 * print_square - prints a square and a new line
 * @size: square size
 */

void print_square(int size)
{
	int width, height;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
