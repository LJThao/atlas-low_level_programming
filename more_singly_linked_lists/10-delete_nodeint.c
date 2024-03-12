#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer head
 * @index: index node
 * Return: 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list = *head;
	listint_t *node = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(list);
		return (1);
	}
	while (a < index - 1)
	{
		if (!list || !(list->next))
			return (-1);
		list = list->next;
		a++;
	}
	node = list->next;
	list->next = node->next;
	free(node);

	return (1);
}
