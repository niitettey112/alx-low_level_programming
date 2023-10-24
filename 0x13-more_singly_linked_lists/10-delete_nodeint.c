#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node at a given position
 * @head: parameter
 * @index: parameter
 *
 * Return: 1 if succeeded, or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int a = 0;
	listint_t *temp, *temp_2;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (a < (index - 1) && temp != NULL)
	{
		temp = temp->next;
		a++;
	}

	if (a != (index - 1) || temp->next == NULL)
		return (-1);

	temp_2 = temp->next;
	temp->next = (temp->next)->next;
	free(temp_2);

	return (1);
}
