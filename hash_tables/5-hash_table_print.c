#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 * Return: 0
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *h1;
	unsigned long int a;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			h1 = ht->array[a];
			while (h1 != NULL)
			{
				printf("'%s': '%s'", h1->key, h1->value);
				h1 = h1->next;
				if (h1 != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
