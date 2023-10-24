#include "lists.h"

/**
 * find_listint_loop - function that finds loop in linked list
 * @head: paramter
 *
 * Return: address of node where loop starts or NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *puma, *cheetah;

	puma = cheetah = head;

	while (puma != NULL && cheetah != NULL)
	{
		puma = puma->next;
		cheetah = cheetah->next->next;

		if (puma == cheetah)
		{
			puma = head;
			while (puma != cheetah)
			{
				puma = puma->next;
				cheetah = cheetah->next;
			}
			return (puma);
		}
	}

	return (NULL);
}
