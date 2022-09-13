#include <stdio.h>
#include "main.h"

/*
 * print_alphabet_x10 - substitute for main function
 * Return: what my code is expected to return
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char a = 'a';
	
	while (i < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar (10);
		i++;
	}
}
