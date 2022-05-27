#include "hash_tables.h"


/**
 * hash_table_delete - deletes
 * @ht: table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux = NULL;
	hash_node_t *aux1 = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		aux1 = ht->array[i];
		while (aux1)
		{
			aux = aux1;
			aux1 = aux1->next;
			free(aux->key);
			free(aux->value);
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
