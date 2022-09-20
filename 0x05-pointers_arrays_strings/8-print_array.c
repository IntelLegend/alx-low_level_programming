#include "main.h"
/**
 *print_array - the boss
 *@a: val
 *@n: val
 */

void print_array(int *a, int *n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		if (y == n - 1)
		{
			printf("%d", a[y]);
		}
		else
		{
			printf("%d, ", a[y]);
		}
	}
	putchar('\n');
}
