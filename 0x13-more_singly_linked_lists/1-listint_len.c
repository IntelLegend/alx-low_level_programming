#include "lists.h"
/**
 * listint_len - length of list
 * @h: head of list
 * Return: size
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
