#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: point to head
 * @str: string
 * Return: newNode
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *newNode = malloc(sizeof(list_t));

	if (head == NULL || newNode == NULL || str == NULL)
	{
		free(newNode);
		free(temp);
		return (NULL);
	}



}
