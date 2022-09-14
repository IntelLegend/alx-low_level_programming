#include "main.h"
/**
 * _isalpha - checks for alphabet
 * @c: doing its job
 * Return: returns 0 for a successful code
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
