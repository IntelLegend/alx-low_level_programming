#include "main.h"

/**
 * _strncat - concactenation of strings
 * @dest: des char
 * @src: orisun char
 * @n: size of src(bytes)
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y = 0;

	while (dest[y] != '\0')
	{
		y++;
	}

	for (x = 0 ; x < n && src[x] != '\0' ; x++)
		dest[y + x] = src[x];
	dest[y + x] = '\0';

	return (dest);
}
