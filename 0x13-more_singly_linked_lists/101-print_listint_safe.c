#include "lists.h"

/**
 * free_index - frees a linked list
 * @head: parameter
 *
 * Return: no return.
 */
void free_index(list_index **head)
{
	list_index *temp;
	list_index *aaa;

	if (head != NULL)
	{
		aaa = *head;
		while ((temp = aaa) != NULL)
		{
			aaa = aaa->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: parameter
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_node = 0;
	list_index *ptr, *n, *a;

	ptr = NULL;
	while (head != NULL)
	{
		n = malloc(sizeof(list_index));

		if (n == NULL)
			exit(98);

		n->p = (void *)head;
		n->next = ptr;
		ptr = n;

		a = ptr;

		while (a->next != NULL)
		{
			a = a->next;
			if (head == a->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_index(&ptr);
				return (num_node);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num_node++;
	}

	free_index(&ptr);
	return (num_node);
}
