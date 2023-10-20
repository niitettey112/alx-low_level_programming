#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: parameter
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	list t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(tmp->str);
		head = head->next;
		free(tmp);
	}
}
