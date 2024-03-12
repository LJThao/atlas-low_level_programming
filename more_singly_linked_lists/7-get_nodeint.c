#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer head in the node
 * @index: index node to return
 * Return: the index node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *node = head;

	while (node && a < index)
	{
		node = node->next;
		a++;
	}
	return (node);
}
