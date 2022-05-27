#include "hash_tables.h"


/**
 * hash_table_print - print
 * @ht: hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux;
	unsigned int i, n = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux)
		{
			if (n == 1)
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			aux = aux->next;
			n = 1;
		}
	}
	printf("}\n");
}
