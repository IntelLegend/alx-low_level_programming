#include <stdio.h>
#include "main.h"
/**
 *_stren - code execution begins here
 *@s: string
 *return: l
 */

#void _strlen(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
	{
		l++;
	}
	return l;
}
