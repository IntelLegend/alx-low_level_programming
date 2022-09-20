#include "main.h"

/**
 * rev_string - code main
 * @s: var
 */

void rev_string(char *s)
{
	int a;
	int size = 0;
	char rev[1000];

	while (s[size] != '\0')
	{
		size++;
	}
	size--;
	for (a = 0; a <= size++; a++)
	{
		rev[a] = s[size - a];
	}
	for (a = 0; a <= size; a++)
	{
		s[a] = rev[a];
	}
}
