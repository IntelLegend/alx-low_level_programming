#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node
 * @head: pointer to list
 * @idx: index of target position
 * @n: data for the node
 * Return: pointer to the added node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int count = 0;
	listint_t *cursor;

	if (!head)
		return (NULL);

	new = create(n);
	if (!new)
		return (NULL);
	if (!*head && idx == 0)
	{
		*head = new;
		return (*head);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	cursor = *head;
	while (cursor)
	{
		if (count == idx - 1)
		{
			new->next = cursor->next;
			cursor->next = new;
			return (new);
		}
		count++;
		cursor = cursor->next;
	}
	return (NULL);
}
