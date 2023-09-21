#include "lists.h"

/**
 * free_list -  a function that frees a list_t list.
 * @head: point to head
 * Return: void
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free(head);
}
