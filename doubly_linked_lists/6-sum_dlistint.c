#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all data (n)
 * @head: head of list
 * Return: s or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int s;

	s = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			s += head->n;
			head = head->next;
		}
	}
	return (s);
}
