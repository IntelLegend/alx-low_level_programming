#include "main.h"

/**
 * _strcat - for concatrenation
 * @dest: des char
 * @src: orisun  char
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int k = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	for (j = 0 ; j < n && src[j] != '\0' ; j++)
		dest[n + j] = src[j];
	dest[k + j] = '\0';

	return (dest);
}
