#include "main.h"

/**
 * prime - prime number
 * @n: int
 * @y: int
 * Return: 1 for prime number, 0 if not
 */
int prime(int n, int y)
{
	if (n % y == 0)
	{
		return (0);
	}
	if (y >= n / 2)
	{
		return (1);
	}
	return (prime(n, y + 1));
}

/**
 * is_prime_number - displays prime
 * @n: int
 * Return: 1 on success
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n == 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
