#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table, or NULL if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int b;

	if (size == 0)
	{
		return (NULL);
	}

	/* Give memory for hash table structure */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}

	/* Memory for array of hash nodes */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;

	/* Initialize all hash node pointers to NULL */
	for (b = 0; b < size; b++)
	{
		new_table->array[b] = NULL;
	}

	return (new_table);
}
