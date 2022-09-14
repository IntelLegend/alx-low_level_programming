#include "main.h"
/**
 * _islower - prints lower case alphabet
 * @alpha: alphabet
 * Return: returns 0 for a successful code
 */

int  _islower(int alpha)
{
	if (alpha >= 'a' && alpha  <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
