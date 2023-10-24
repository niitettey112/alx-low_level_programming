#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t list
 * @head: parameter
 * @n: parameter
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *f_node;
	listint_t *temp

	f_node = malloc(sizeof(listint_t));
	if (f_node == NULL)
		return (NULL);

	f_node->n = n;
	f_node->next = NULL;

	if (*head == NULL)
		*head = f_node;
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = f_node;
	}

	return (f_node);
}
