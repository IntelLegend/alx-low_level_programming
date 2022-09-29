#include "main.h"

/**
 * sq - returns natural square root of a number
 * @n: number
 * @y: int
 * Return: square root
 */
int sq(int n, int y)
{
	if (y * y > n)
	{
		return (-1);
	}
	if (y * y == n)
	{
		return (y);
	}
	return (sq(n, y + 1));
}

/**
 * _sqrt_recursion - returns int
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}
