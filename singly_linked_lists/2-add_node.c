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

	if (head != NULL && str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = *head;

		*head = new;

		return (new);
	}
	return (0);
}

/**
 * _strlen - returning the length of a str
 * @s: string 
 * Return: length of the str
 */

int _strlen(const char *s);
{
	int a = 0;

	while (*s)
	{
		s++;
		a++;
	}
	return (a);
}
