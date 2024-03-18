#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: the key
 * @value: value associated with the key
 * Return: 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *e1;
	char *e2;
	unsigned long int index, a;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	e2 = strdup(value);
	if (e2 == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (a = index; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = e2;
			return (1);
		}
	}
	e1 = malloc(sizeof(hash_node_t));
	if (e1 == NULL)
	{
		free(e2);
		return (0);
	}
	e1->key = strdup(key);
	if (e1->key == NULL)
	{
		free(e1);
		return (0);
	}
	e1->value = e2;
	e1->next = ht->array[index];
	ht->array[index] = e1;

	return (1);
}
