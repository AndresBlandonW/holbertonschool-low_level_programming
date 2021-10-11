#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: the key
 * @value: val associated with the key
 *
 * Return: 1 is success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item, *current;
	unsigned long int size;
	unsigned long int index;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);


	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	for (current = ht->array[index]; current != NULL; current = current->next)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
	}

	new_item = create_item(key, value);

	if (ht->array[index] == NULL)
		ht->array[index] = new_item;
	else
	{
		new_item->next = ht->array[index];
		ht->array[index] = new_item;
	}

	return (1);
}

/**
 * create_item - add a new node
 * @key: key to check exist or add
 * @value: value to add or replace
 *
 * Return: create node
 */
hash_node_t *create_item(const char *key, const char *value)
{

	hash_node_t *item = malloc(sizeof(hash_node_t));
	char *key_copy, *value_copy;

	if (item == NULL)
		return (0);

	key_copy = strdup(key);
	value_copy = strdup(value);
	item->key = key_copy;
	item->value = value_copy;
	item->next = NULL;

	return (item);
}
