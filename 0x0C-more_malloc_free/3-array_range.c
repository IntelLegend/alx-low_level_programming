#include <stdlib.h>
/**
 * array_range - create an array of integers with minimum and maximum values
 * @min: int
 * @max: int
 * Return: int
 */
int *array_range(int min, int max)
{
	int *p;
	int size = max - min + 1;
	int i = 0;

	if (size < 0)
		return (0);
	p = malloc(size * sizeof(*p));
	if (!p)
		return (0);
	while (min <= max)
		p[i++] = min++;
	return (p);
}
