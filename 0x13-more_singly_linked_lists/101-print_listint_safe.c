#iinclude "lists.h"

/**
 * count_nodes_till_loop - count nodes to know how many nodes to print
 * @head: parameter
 *
 * Return: number of unique nodes in list before a loop
 */
int count_nodes_till_loop(const listint_t *head)
{
	int num = 0;
	const listint_t *tiger, *cheetah;

	tiger = cheetah = head;

	while (tiger != NULL && cheetah != NULL)
		tiger = tiger->next;
		cheetah = cheetah->next->next;
		num++;

		if (tiger == cheetah)
			tiger = head;
			while (tiger != cheetah)
				tiger = tiger->next;
				cheetah = cheetah->next;
				num++;
			return (num);
	return (0);
}

/**
 * loop - find if there's a loop in linked list
 * @head: pointer to head pointer of linked list
 * Return: 0 if no loop, 1 if loop
 */
int loop(const listint_t *head)
{
	const listint_t *tiger, *cheetah;

	tiger = cheetah = head;

	while (tiger != NULL && cheetah != NULL)
		tiger = tiger->next;
		cheetah = cheetah->next->next;

		if (tiger == cheetah)
			return (1);
	return (0);
}

/**
 * print_listint_safe - prints list with addresses
 * @head: pointer to head pointer of linked list
 * Return: number of nodes in list, exit(98) if failed
 */
size_t print_listint_safe(const listint_t *head)
{
	int num = 0;
	int loop_create;
	size_t num_n = 0;
	const listint_t *temp;

	if (head == NULL)
		exit(98);

	loop_create = loop(head);

	if (loop_create == 1)
		num = count_nodes_till_loop(head);
		for (loop_create = 0; loop_create < num; loop_create++)
			printf("[%p] %d\n", (void *)temp, temp->n);
			num_n += 1;
			temp = temp->next;
	else if (loop_create == 0)
		temp = head;
		while (temp != NULL)
			printf("[%p] %d\n", (void *)temp, temp->n);
			num_n += 1;
			temp = temp->next;

	return (num_n);
}
