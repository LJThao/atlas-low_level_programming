#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of list_t
 * @head: head of the list
 * @str: string to add a new node
 * Return: NULL if fails or new address list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t str_len;

	if (str == NULL)
		str_len = 0;

	while (str[str_len] != '\0')
		str_len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	new->str = strdup(str);
	new->len = str_len;
	*head = new;

	return (*head);
}
