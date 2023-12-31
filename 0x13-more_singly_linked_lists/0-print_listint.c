#include "lists.h"

/**
 * print_listint -  a function that prints all the elements of listint_t list
 * @h: point to head
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
