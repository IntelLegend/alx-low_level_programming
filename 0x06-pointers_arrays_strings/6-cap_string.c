#include "main.h"

/**
 * cap_string - capitalization
 * @s: string array
 * Return: string array
 */

char *cap_string(char *s)
{
	char strn[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int y = 0, i;

	while (s[y])
	{
		i = 0;
		while (i < len)
		{
			if ((y == 0 || s[y - 1] == strn[i]) && (s[y] >= 97 && s[y] <= 122))
				s[y] = s[y] - 32;
			i++;
		}
		y++;
	}
	return (s);
}
