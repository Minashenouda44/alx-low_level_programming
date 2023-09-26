#include "lists.h"

/**
 * print_listint -  a function that prints all the elements of listint_t list
 * @h: point to head
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;
	const listint_t *temp;

	if (h == NULL)
		return (nodes);

	temp = malloc(sizeof(listint_t));

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
	}

	return (nodes);
}
