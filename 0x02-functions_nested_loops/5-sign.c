#include "main.h"
/**
 * print_sign - return the value of an integer
 * @value: value to b e worked on
 * Return: return 0
 */

int print_sign(int value)
{
	if (value > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (value == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
