#include "main.h"

/**
 * cap_string - capitalization
 * @s: string array
 * Return: string array
 */

char *cap_string(char *s)
{
	int high;
	int low;

	for (high = 0; s[high] != '\0'; high++)
	{
		low = high - 1;
		if (s[high] >= 'a' && s[high] <= 'z')
		{
			if (high == 0)
				s[high] = s[high] - 32;
			else if (s[low] >= 9 && s[prev] <= 10)
				s[high] = s[high] - 32;
			else if (s[low] >= 32 && s[low] <= 34)
				s[high] = s[high] - 32;
			else if (s[low] >= 40 && s[low] <= 41)
				s[high] = s[high] - 32;
			else if (s[low] == 46)
				s[high] = s[high] - 32;
			else if (s[low] == 59)
				s[high] = s[high] - 32;
			else if (s[low] == 123 || s[low] == 125)
				s[high] = s[high] - 32;
		}
	}

	return (s);
}
