#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* _strlen - return the length
* @s: pointer value
* Return: length
*/

int _strlen(const char *s)
{

int len;
len = 0;
while (*(s + len) != 0)
{
len++;
}
return (len);

}


/**
 * add_node - add new node
 * @head: pointer
 * @str: data
 * Return: the address of element
 */

list_t *add_node(list_t **head, const char *str)
{

list_t *newNode = malloc(sizeof(list_t));

if (newNode == NULL)
return (NULL);

newNode->str = strdup(str);
newNode->len = _strlen(str);
newNode->next = *head;
*head = newNode;

return (newNode);
}
