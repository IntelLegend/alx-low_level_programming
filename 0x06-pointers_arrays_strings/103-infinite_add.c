#include "main.h"
#include <stdio.h>
/**
 * infinite_add - performs addtion
 * @n1: num 1.
 * @n2: num 2
 * @r: buffer
 * @size_r: size of buffer:
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x = 0, y = 0, z, a, b, c, add = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + y) != '\0')
		y++;
	if (x >= y)
		a = x;
	else
		a = y;
	if (size_r <= a + 1)
		return (0);
	r[a + 1] = '\0';
	x--, y--, size_r--;
	b = *(n1 + x) - 48, c = *(n2 + y) - 48;
	while (a >= 0)
	{
		z = b + c + add;
		if (z >= 10)
			add = z / 10;
		else
			add = 0;
		if (z > 0)
		*(r + a) = (z % 10) + 48;
		else
			*(r + a) = '0';
		if (x > 0)
			x--, b = *(n1 + x) - 48;
		else
			b = 0;
		if (y > 0)
			y--, c = *(n2 + y) - 48;
		else
			c = 0;
		a--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
