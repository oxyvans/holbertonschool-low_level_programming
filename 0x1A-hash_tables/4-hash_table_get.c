#include "hash_tables.h"

/**
 * hash_table_get - geter
 * @ht: hash table
 * @key: the key
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int f_hash;
	hash_node_t *aux;

	if ((key == NULL) || (ht == NULL))
		return (NULL);

	f_hash = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[f_hash];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
			return (aux->value);
		aux = aux->next;
	}

	return (NULL);
}
