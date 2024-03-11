#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer head to free a list
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	while(head)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
