#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * and returns the head node’s data (n).
 * @head: point to 1st node
 * Return: head
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;

	*head = (*head)->next;
	free(temp);
	temp = NULL;

	return (data);
}
