#include "hash_tables.h"


/**
 * hash_table_set - adds an element to a hash table
 * @ht: the hash table
 * @key: is the key
 * @value: value
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *aux;
	unsigned long int i;

	if (key == NULL || *key == '\0' || value == NULL || ht == NULL)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	aux = ht->array[i];

	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			if (aux->value == NULL)
				return (0);
			return (1);
		}
		aux = aux->next;
	}

	aux = ht->array[i];
	ht->array[i] = malloc(sizeof(hash_node_t));
	if (ht->array[i] == NULL)
		return (0);
	ht->array[i]->key = strdup(key);
	if (ht->array[i]->key == NULL)
	{
		free(ht->array[i]);
		return (0);
	}
	ht->array[i]->value = strdup(value);
	if (ht->array[i]->value == NULL)
	{
		free(ht->array[i]);
		return (0);
	}
	ht->array[i]->next = aux;
	return (1);
}
