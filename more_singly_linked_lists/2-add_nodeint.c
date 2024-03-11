#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of the list
 * @head: head pointer
 * @n: int n
 * Return: NULL if it fails or point to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
