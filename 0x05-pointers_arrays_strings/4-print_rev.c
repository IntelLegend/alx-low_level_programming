#include "main.h"

/**
 * print_rev - my function
 * @s: var
 */

void print_rev(char *s)
{
	char *j= s;

	if (s)
	{
		while (*j)
		{
			j++;
		}
		while (s < j--)
		{
			_putchar(*j);
		}
		_putchar('\n')
			_putchar('\n');
	}
}
