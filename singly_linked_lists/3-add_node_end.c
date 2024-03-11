#include "lists.h"

/**
  * add_node_end - function that adds a new node to list_t
  * @head: head list
  * @str: The string
  * Return: NULL if fails or new node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end;

	if (str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = NULL;

		if (*head == NULL)
		{
			*head  = new;
			return (*head);
		}
		else
		{
			end = *head;
			while (end->next)
				end = end->next;

			end->next = new;
			return (end);
		}
	}
	return (NULL);
}

/**
  * _strlen - returning the string
  * @s: string
  *
  * Return: length of str
  */

int _strlen(const char *s)
{
	int a = 0;

	while (*s)
	{
		s++;
		a++;
	}

	return (a);
}
