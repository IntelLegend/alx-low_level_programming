#include <stdlib.h>
/**
 * malloc_checked - returns address
 * @b: unsigned
 * Return: address
 */
void *malloc_checked(unsigned int b)
{
	void *z;

	z = malloc(b);

	if (z == 0)
		exit(98);
	return (z);
}
