#include "lists.h"

/**
 * free_list -  a function that frees a list_t list.
 * @head: point to head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *currentNode, *nextNode;

	if (head == NULL)
		return;

	currentNode = head;

	while (currentNode)
	{
		nextNode = currentNode->next;
		free(currentNode->str);
		free(currentNode);
		currentNode = nextNode;
	}
}
