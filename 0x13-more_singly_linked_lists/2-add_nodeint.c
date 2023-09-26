#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a list.
 * @head: point to head
 * @n: new data
 * Return: newNode
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
