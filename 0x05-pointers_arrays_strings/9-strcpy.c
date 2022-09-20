#include "main.h"
/**
 * _strcpy - point of call
 *@dest: string holding variable
 *@src: string holding variable
 *Return: Dest
 */

char *_strcpy(char *dest, char *src)
{
	int z = 0;

	while (src[z] != '\0')
	{
		dest[z] = src[z];
		z++;
	}
	dest[z] = '\0';
	return (dest);
}

