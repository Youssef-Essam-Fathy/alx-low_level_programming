#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 * Return: void
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char flg = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (flg == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flg = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
