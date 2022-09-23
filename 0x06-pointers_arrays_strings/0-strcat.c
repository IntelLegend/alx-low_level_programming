#include "main.h"

/**
 * _strcat - for concatrenation
 * @dest: des char
 * @src: orisun  char
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int j = 0, k = 0;

	while (*(dest + k) != '\0')
		k++;
	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(dest + k) = *(src + j);
		k++;
	}
	*(dest + k) = *(src + j);

	return (dest);
}
