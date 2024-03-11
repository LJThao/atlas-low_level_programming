#include "lists.h"

/**
  * free_list - function that frees a list_t
  * @head: head list
  * Return: 0
  */

void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list->str);
		free(list;
	}
	free(head);
}
