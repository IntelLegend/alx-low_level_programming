#include "lists.h"
/**
 * pop_listint - return and remove first element
 * @head: pointer to pointer to head of list
 * Return: data in popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *front;
	int i;

	if (!head || !*head)
		return (0);

	front = *head;
	*head = (*head)->next;
	front->next = NULL;
	i = front->n;
	free(front);
	return (i);
}
