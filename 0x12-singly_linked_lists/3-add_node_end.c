#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * @head: parameter 1
 * @str: parameter 2
 *
 * Return: the address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element, *temp;
	unsigned int a, sum = 0;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
	{
		sum++;
	}
	new_element->len = sum;
	new_element->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_element;
	}
	else
	{
		while (temp->next != NULL)
			temp = tep->next;
		temp->next = new_element;
	}
	return (*head);
}
