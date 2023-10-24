#include "lists.h"

/**
 * sum_listint - return sum of all data in linked list
 * @head: parameter
 *
 * Return: 0 if empty
 */

int sum_listint(listint_t *head)
{

	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
