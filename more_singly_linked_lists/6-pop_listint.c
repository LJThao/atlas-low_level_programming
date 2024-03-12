#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t list
 * @head: pointer head
 * Return: data n
 */

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int a;

	if (!head || !*head)
		return (0);

	a = (*head)->n;
	pop = (*head)->next;
	free(*head);
	*head = pop;

	return (a);
}
