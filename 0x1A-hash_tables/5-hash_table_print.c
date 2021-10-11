#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *item;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			for (item = ht->array[index]; item; item = item->next)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", item->key, item->value);
				flag = 1;
			}
		}
	}
	printf("}\n");
}
