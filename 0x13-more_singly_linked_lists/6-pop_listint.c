#include "lists.h"

/**
 * pop_listint - deletes the head node, and returns the head node’s data
 * @head: parameter
 *
 * Return: 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int dt;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;

	dt = temp->n;

	*head = temp->next;
	free(temp);

	return (dt);

}
