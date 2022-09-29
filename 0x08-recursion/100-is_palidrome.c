#include "main.h"

/**
 * length - returns length
 * @s: char array
 * Return: length of integer
 */

int length(char *s)
{

	if (*s != '\0')
		return (1 + length(s + 1));
	else
		return (0);
}

/**
 * compare - compare characters
 * @s: string
 * @beg: first index
 * @end: last index
 * Return: non-match 0, match 1
 */

int compare(char *s, int beg, int end)
{
	if (s[beg] != s[end])
	{
		return (0);
	}
	else if (beg == end && s[beg] == s[end])
	{
		return (1);
	}
	else if (beg == end - 1 && s[beg] == s[end])
	{
		return (1);
	}
	else
	{
		return (compare(s, beg + 1, end - 1));
	}
}

/**
 * is_palindrome - is it palidrome?
 * @s: str
 * Return: 1 if palindrom, 0 if not
 */

int is_palindrome(char *s)
{
	int length, index, last;

	length = length(s);
	index = 0;
	last = length - 1;

	if (length == 0 || length == 1)
	{
		return (1);
	}
	else
		return (compare(s, length, last));
}
