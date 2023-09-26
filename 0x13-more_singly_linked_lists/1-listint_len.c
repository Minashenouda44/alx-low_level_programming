#include "lists.h"

/**
 * listint_len - a function that prints all the elements of a listint_t list.
 * @h: point to head
 * Return: nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *temp;

	if (h == NULL)
		return (nodes);

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		nodes++;
	}

	return (nodes);
}
