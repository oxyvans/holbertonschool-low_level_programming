#include "hash_tables.h"


/**
  * hash_table_create - create a hash table
  * @size: size
  * Return: table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasnase = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	hasnase = malloc(sizeof(hash_table_t));
	if (hasnase == NULL)
		return (NULL);

	hasnase->array = malloc(sizeof(hash_node_t *) * size);

	if (hasnase->array == NULL)
	{
		free(hasnase);
		return (NULL);
	}

	hasnase->size = size;

	for (i = 0; i < size; i++)
		hasnase->array[i] = NULL;

	return (hasnase);
}
