#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals
 * @a: array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 =  0;
	int sum2 = 0;
	int fmr = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i == 0)
		{
			sum1 += *(a + i);
			fmr = i;
		}
		else if (i == (fmr + size + 1))
		{
			sum1 += *(a + i);
			fmr = i;
		}
	}

	for (i = 0; i < size; i++)
	{
		sum2 += *(a + (size * (i + 1) - (i + 1)));
	}
	printf("%d, %d\n", sum1, sum2);
}
