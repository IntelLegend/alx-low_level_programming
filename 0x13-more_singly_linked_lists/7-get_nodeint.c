#include "lists.h"
/**
 * get_nodeint_at_index - traverse list
 * @head: pointer
 * @index: index
 * Return: pointer to found node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *cursor;

	cursor = head;
	while (cursor && count <= index)
	{
		if (count == index)
			return (cursor);
		cursor = cursor->next;
		count++;
	}
	return (cursor);
}
