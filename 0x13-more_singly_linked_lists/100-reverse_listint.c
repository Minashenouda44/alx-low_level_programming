#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: point to 1st node
 * Return: head node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	
	prev = next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
