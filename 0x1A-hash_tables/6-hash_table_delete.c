#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
			free_items(ht->array[index]);
	}
	free(ht->array);
	free(ht);
}

/**
 * free_items - frees a items
 * @item: pointer hash table
 */
void free_items(hash_node_t *item)
{
	hash_node_t *temp;

	while (item)
	{
		temp = item;
		item = item->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
}
