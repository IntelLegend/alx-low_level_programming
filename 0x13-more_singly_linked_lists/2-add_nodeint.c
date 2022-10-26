#include "lists.h"
/**
 * add_nodeint - add node
 * @head: head of the list
 * @n: data
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = create(n);
	if (!new)
		return (NULL);
	new->next = *head;
	*head = new;
	return (*head);
}
