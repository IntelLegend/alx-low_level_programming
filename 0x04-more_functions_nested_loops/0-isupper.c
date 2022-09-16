#include "main.h"
/**
 * _isupper - check if uppercase
 * @c: check this
 *
 * Return: return 1 if uppercase or 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
