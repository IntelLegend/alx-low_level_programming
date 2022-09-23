#include "holberton.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string array
 * Return: string array
 */

char *leet(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] == 'a' || s[l] == 'A')
			s[i] = '4';
		if (s[l] == 'e' || s[l] == 'E')
			s[l] = '3';
		if (s[l] == 'o' || s[l] == 'O')
			s[l] = '0';
		if (s[l] == 't' || s[l] == 'T')
			s[l] = '7';
		if (s[l] == 'l' || s[l] == 'L')
			s[l] = '1';
	}

	return (s);
}
