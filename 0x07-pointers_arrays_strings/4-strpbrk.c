#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: pointer
 * @accept: set of matchable characters
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				return (s + i);
	}
	return (NULL);
}
