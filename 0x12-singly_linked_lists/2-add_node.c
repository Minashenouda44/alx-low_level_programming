#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list.
 * @head: point to head
 * @str: string
 * Return: newNode
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (head == NULL || str == NULL || newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(newNode->str);

	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

