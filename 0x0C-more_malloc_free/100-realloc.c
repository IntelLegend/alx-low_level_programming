#include <stdlib.h>
/**
 * _realloc - reallocate a memory block
 * @ptr: pointer
 * @old_size: int bytes
 * @new_size: int bytes
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *pt = ptr;
	unsigned int i;

	if (!ptr)
		return (malloc(new_size));
	else if (!new_size)
	{
		free(ptr);
		return (0);
	}

	if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (!p)
		return (0);

	for (i = 0; i < new_size && i < old_size; i++)
		p[i] = pt[i];
	free(ptr);
	return (p);
}
