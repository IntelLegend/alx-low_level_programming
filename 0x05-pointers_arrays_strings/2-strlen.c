#include <stdio.h>
#include "main.h"
/**
 *_strlen - code execution begins here
 *@s: string
 *return: l
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
