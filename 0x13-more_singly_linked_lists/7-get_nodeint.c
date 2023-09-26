#include "lists.h"

/**
 * get_nodeint_at_index -  a function that returns the nth node of linked list.
 * @head: point to 1st node
 * @index: node position
 * Return: 
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (temp != NULL)
	{
		if (position == index)
			return (temp);
		temp = temp->next;
		position++;
	}
	return (NULL);
}
