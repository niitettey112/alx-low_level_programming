#include "lists.h"

/**
 * reverse_listint - function that reverses linked list
 * @head: parameter
 *
 * Return: 1 if succeed, -1 if fail
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head; 
		*head = next;
	}
	(*head) = prev;`

	return (*head);
}
