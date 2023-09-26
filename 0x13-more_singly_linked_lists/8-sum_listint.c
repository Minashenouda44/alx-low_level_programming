#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of linked list.
 * @head: point to 1st node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
