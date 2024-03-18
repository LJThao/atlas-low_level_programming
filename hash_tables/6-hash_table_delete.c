#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 * Return: 0
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *a, *b;
	unsigned long int c;

	for (c = 0; c < ht->size; c++)
	{
		if (ht->array[c] != NULL)
		{
			a = ht->array[c];
			while (node != NULL)
			{
				b = a->next;
				free(a->key);
				free(a->value);
				free(a);
				a = b;
			}
		}
	}
	free(head->array);
	free(head);
}
