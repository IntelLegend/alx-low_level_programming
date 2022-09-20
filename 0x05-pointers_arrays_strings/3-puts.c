#include "main.h"

/**
 * _puts - Starts here
 * @str: var
 */

void _puts(char *str)
{
	int word;

	for (word = 0; *(str + word) != '\0'; word++)
	{
		_putchar(str[word]);
	}
	_putchar('\n');
}
