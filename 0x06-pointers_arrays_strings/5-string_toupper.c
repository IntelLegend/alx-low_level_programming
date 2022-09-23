
#include "main.h"
#include <stdio.h>

/**
 * string_toupper - converts lower to upper
 * @s: array
 * Return: array
 */

char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] = s[x] - 32;
	}

	return (s);
}
