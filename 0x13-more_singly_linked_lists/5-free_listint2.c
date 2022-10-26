#include "lists.h"
/**
 * free_listint2 - free list and set head to null
 * @head: pointer to pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
