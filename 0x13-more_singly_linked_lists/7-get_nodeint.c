#include "lists.h"

/**
 * get_nodeint_at_index - function to return nth node of listint_t linked list
 * @head: parameter
 * @index: parameter
 *
 * Return: NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int a = 0;

	if (head == NULL)
		return (NULL);

	while ((a < index) && head != NULL)
	{
		head = head->next;
		a++;
	}

	if (a == index)
		return (head);

	return (NULL);
}
