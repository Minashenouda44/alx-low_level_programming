#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: point to 1st node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}
