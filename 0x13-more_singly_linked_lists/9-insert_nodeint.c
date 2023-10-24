#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: parameter
 * @idx: index
 * @n: parameter
 *
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int a = 0;
	listint_t *f_node, *temp;

	if (head == NULL)
		return (NULL);

	f_node = malloc(sizeof(listint_t));
	if (f_node == NULL)
		return (NULL);
	f_node->n = n;

	if (idx == 0)
	{
		f_node->next = *head;
		*head = f_node;
		return (f_node);
	}

	temp = *head;
	while (a < (idx - 1))
	{
		temp = temp->next;
		a++;

		if (temp == NULL)
		{
			free(f_node);
			return (NULL);
		}
	}

	f_node->next = temp->next;
	temp->next = f_node;
	return (f_node);
}
