#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: point to head
 * @str: string
 * Return: newNode
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *current;

	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
	return (newNode);
}
