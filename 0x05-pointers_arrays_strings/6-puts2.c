#include "main.h"
/**
 * puts2 - display string
 * @str: string variable
 */

void puts2(char *str)
{
	int h = 0;
	int i;

	while (str[h] != '\0')
	{
		h++;
	}
	for (i = 0; i < h; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
