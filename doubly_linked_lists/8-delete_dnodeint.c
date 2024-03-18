#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index of a list
 * @head: head of list
 * @index: index of deleted node
 * Return: 1 if succeeded or -1 if fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *a1;
	dlistint_t *a2;
	unsigned int b;

	a1 = *head;

	if (a1 != NULL)
		while (a1->prev != NULL)
			a1 = a1->prev;

	b = 0;

	while (a1 != NULL)
	{
		if (b == index)
		{
			if (b == 0)
			{
				*head = a1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				a2->next = a1->next;

				if (a1->next != NULL)
					a1->next->prev = a2;
			}
			free(a1);
			return (1);
		}
		a2 = a1;
		a1 = a1->next;
		a1++;
	}
	return (-1);
}
