#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: point to 1st node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
