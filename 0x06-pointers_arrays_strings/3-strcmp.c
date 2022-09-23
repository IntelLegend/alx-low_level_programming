#include "main.h"
/**
 * _strcmp - function that compares a string
 * @x: char
 * @y: char
 * Return: int
 */
int _strcmp(char *x, char *y)
{
	int i = 0, diff = 0;

	for ( ; *(x + i) != '\n' ; i++)
	{
		if (&x == &y  || i > 509)
		{
			diff = 0;
			break;
		}
		diff = x[i] - y[i];
		if (diff != 0)
			break;
	}
	return (diff);
}
