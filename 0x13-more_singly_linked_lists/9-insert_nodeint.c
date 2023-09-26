#include "lists.h"

/**
 * insert_nodeint_at_index - a function inserts a new node at a given position.
 * @head: point to 1st node
 * @idx: position of newNode
 * @n: newNode data
 * Return: newNode
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int position = 0;
	listint_t *temp, *newNode;

	if (*head == NULL)
		return (NULL);
	temp = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	while (temp != NULL)
	{
		if (position == idx)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		temp = temp->next;
		position++;
	}
	free(newNode);
	return (NULL);
}
