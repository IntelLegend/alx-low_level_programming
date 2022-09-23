#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string array
 * Return: string array
 */

char *leet(char *s)
{
	int a = 0, b, l = 5;
	char str[5] = {'A', 'E', 'O', 'T', 'L'};
	char strc[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < l)
		{
			if (s[a] == str[b] || s[a] - 32 == str[b])
				s[a] = strc[b];
			b++;
		}
		a++;
	}
	return (s);
}
