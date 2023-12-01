#include "hash_tables.h"

/**
 * make_hash_node - creates a new hash node
 * @key: the key
 * @value: the value for the node
 * Return: the new node, or NULL on failure
 **/
hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *nod;

	nod = malloc(sizeof(hash_node_t));
	if (nod == NULL)
		return (NULL);
	nod->key = strdup(key);
	if (nod->key == NULL)
	{
		free(nod);
		return (NULL);
	}
	nod->value = value;
	if (nod->value == NULL)
	{
		free(nod->key);
		free(nod);
		return (NULL);
	}
	nod->next = NULL;
	return (nod);
}

/**
 * hash_table_set -  a function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx;
	hash_node_t *hashNod, *temp;
	char *new_val;

	if (!ht || !ht->array || ht->size == 0 ||
		!key || strlen(key) == 0 || !value)
		return (0);
	indx = key_index((unsigned char *)key, ht->size);
	temp = ht->array[indx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_val = strdup(value);
			if (!new_val)
				return (0);
			free(temp->value);
			temp->value = new_val;
			return (1);
		}
		temp = temp->next;
	}
	hashNod = make_hash_node(key, value);
	if (!hashNod)
		return (0);
	hashNod->next = ht->array[indx];
	ht->array[indx] = hashNod;
	return (1);
}
