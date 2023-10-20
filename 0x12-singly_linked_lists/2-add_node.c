#include "lists.h"

/**
 * add_node - Function that adds a new node
 * @head: parameter 1
 * @str: parameter 2
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
	unsigned int a, sum = 0;

	new_element = malloc(sizeof(list_t));

	if (new_element == NULL)
		return (NULL);
	new_element->str = strdup(str);

	for (a = 0; str[a] != '\0'; a++)
	{
		sum++;
	}
	new_element->len = sum;
	new_element->next = *head;
	*head = new_element;

	return (new_element);
}
