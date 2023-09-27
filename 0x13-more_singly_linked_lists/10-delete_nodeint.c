#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a listint_t linked list.
 * @head: point to 1st node
 * @index:  position of node
 * Return: 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = node = *head;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		node = NULL;
	}
	else
	{
		while (index != 1)
		{
			temp = node;
			node = node->next;
			index--;
		}
		temp->next = node->next;
		free(node);
		node = NULL;
	}
	return (1);
} 
