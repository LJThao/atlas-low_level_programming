#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: pointer head
 * @idx: index node
 * @n: int n (data)
 * Return: 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new_node;
	listint_t *list = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (a = 0; list && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new_node->next = list->next;
			list->next = new_node;
			return (new_node);
		}
		else
			list = list->next;
	}
	return (NULL);
}
