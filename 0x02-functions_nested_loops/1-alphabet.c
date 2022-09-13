#include <stdio.h>
#include "main.h"

/**
 * main - program execution begins here
 * Return:  the return value
 * Description: Program that displays a to z
 */

int main(void)
{
	char a = 97;

	while (a <= 122)
	{
		printf("%c\n", a);
		a++;
	}
}
