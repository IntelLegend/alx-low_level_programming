#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse
 * @a: integers
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int half = n / 2;
	int left, right, x;

	n -= 1;

	for (x = 0; x < half; x++)
	{
		left = a[n - x];
		right = a[x];
		a[x] = left;
		a[n - x] = right;
	}
}
