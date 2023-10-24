#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of listint_t list
 * @n: parameter
 * @head: parameter
 *
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_new = malloc(sizeof(listint_t));

	if (node_new == NULL)
		return (NULL);

	*node_new-> = n;
	node_new->next = *head;

	*head = node_new;

	return (node_new);
}
