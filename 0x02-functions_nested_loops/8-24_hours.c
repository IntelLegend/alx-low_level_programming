#include "main.h"

/**
 * jack_bauer -prints minutes in a day
 *
 * Return: return 0 for a succesful code
 */

void jack_bauer(void)

{
	int a;
	int b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar (a / 10 + '0');
			_putchar (a % 10 + '0');
			_putchar (':');
			_putchar (b / 10 + '0');
			_putchar (b % 10 + '0');
			_putchar ('\n');
		}


	}
}
