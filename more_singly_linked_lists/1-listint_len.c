#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: listint_t h
 * Return: returning the number of nodes
 */

size_t listint_len(const listint_t *h)
{
        size_t node = 0;

        while (h)
        {
                node++;
                h = h->next;
        }
        return (node);
}
