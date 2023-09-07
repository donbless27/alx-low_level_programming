#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table.
 * @ht: A pointer to the hash table
 * Description: print the key/value in the order that they
 *     appear in the array of hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int k;
	unsigned char hash_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			if (hash_flag == 1)
				printf(", ");

			current = ht->array[k];
			while (current != NULL)
			{
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
				if (current != NULL)
					printf(", ");
			}
			hash_flag = 1;
		}
	}
	printf("}\n");
}
