#include "main.h"

/**
 * _strspn - The function that gets the length of a prefix substring.
 * @s: pointer
 * @accept: set of characters
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;
	int c;

	for (i = 0; s[i]; i++)
	{
		c = count;
		for (j = 0; accept[j]; j++)
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		if (c == count)
			break;
	}
	return (count);
}
