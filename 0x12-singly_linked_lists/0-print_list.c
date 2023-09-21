#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: pointer to head
 * Return: no of nodes n
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	int strLegnth = 0;

	strLegnth = strlen(h->str);

	while (h != NULL)
	{
		printf("[%d] %s\n", strLegnth, strLegnth ? h->str : "(nil)");
		h = h->next;
		nodes++;
	}

	return (nodes);
}
