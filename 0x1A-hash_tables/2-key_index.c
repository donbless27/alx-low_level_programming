#include "hash_tables.h"

/**
 * key_index - A function that gives you the index of a key
 * @key: The key to get the index
 * @size: The size of the array of the hash table
 * Return: The index of the key
 * ?*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Calculate the hash value using hash_djb2*/
	unsigned long int hash_value = hash_djb2(key);

	/*Calculate the index within the array*/
	unsigned long int index = hash_value % size;
	
	return index;
}
