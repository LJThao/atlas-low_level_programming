#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: the key we're looking for
 * Return: value of the element or NULL if key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *a;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	a = ht->array[index];
	while (a && strcmp(a->key, key) != 0)
		a = a->next;

	return ((a == NULL) ? NULL : a->value);
}
