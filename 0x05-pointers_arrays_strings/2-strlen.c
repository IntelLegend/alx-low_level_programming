#include <stdio.h>
#include "main.h"
/**
 *_strlen - execute from here
 *@s: string
 *Return: l
 */

int _strlen(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
	{
		l++;
	}
	return (l);
}
