#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of the list
 * @head: pointer head
 * @n: int n
 * Return: NULL if fails or point to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *end_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (end_node->next)
		end_node = end_node->next;

	end_node->next = new_node;
	return (new_node);
}
