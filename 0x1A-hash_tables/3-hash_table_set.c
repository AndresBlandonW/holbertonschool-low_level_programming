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
	hash_node_t *new_item, *current_item;
	unsigned long int size;
	unsigned long int index;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);


	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	current_item = ht->array[index];

	while (current_item != NULL)
	{
		if (strcmp(current_item->key, key) == 0)
		{
			free(current_item->value);
			current_item->value = strdup(value);
			if (current_item->value == NULL)
				return (0);
			return (1);
		}
		current_item = current_item->next;
	}

	new_item = create_item(key, value);
	if (new_item == NULL)
		return (0);
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

	item->key = (char *) malloc(strlen(key) + 1);
	item->value = (char *) malloc(strlen(value) + 1);

	strcpy(item->key, key);
	strcpy(item->value, value);

	return (item);
}
