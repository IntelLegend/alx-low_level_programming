#include <stdio.h>
#include "main.h"

/**
 * _strstr - A function that  locates a substring
 * @haystack: string
 * @needle: substring to find
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i]; i++)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
