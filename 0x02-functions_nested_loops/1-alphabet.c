#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - program execution begins here
 * Return:  the return value
 * Description: Program that displays a to z
 */

void print_alphabet(void)
{
	char a = 97;

	while (a <= 122)
	{
		printf("%c\n", a);
		a++;
	}
	return (0);
}
