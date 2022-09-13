#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - program execution begins here
 * Return:  the return value
 * Description: Program that displays a to z
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar (10);
}
