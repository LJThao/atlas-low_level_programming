#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data n
 * @head: pointer head
 * Return: sum of the data n
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *list = head;

	while(list)
	{
		sum += list->n;
		list = list->next;
	}
	return (sum);
}
