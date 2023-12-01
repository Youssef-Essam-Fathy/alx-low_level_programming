#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table , or NULL
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newt;
	unsigned long int i;

	newt = malloc(sizeof(hash_table_t));
	if (!newt)
		return (NULL);

	newt->size = size;
	newt->array = malloc(sizeof(hash_node_t *) * size);
	if (!newt->array)
	{
		free(newt);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		newt->array[i] = NULL;

	return (newt);
}
