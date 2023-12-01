#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht:  the hash table you want to look into
 * @key: the key you are looking for
 * Return:  the value associated with the element,
 *          or NULL if key couldn’t be found
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *temp;

	if (!ht || !ht->array || ht->size == 0 ||
		!key || strlen(key) == 0)
		return (NULL);
	indx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[indx];
	while (!temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
