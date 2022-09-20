#include "main.h"

/**
 * swap_int - where my code begins
 *@a: value given
 *@b: Swapped value
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}

