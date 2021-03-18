#include "lists.h"

/**
 * add_node_end - add a node a the end of a list
 * @head: pointer to pointer to head list
 * @str: string
 *
 * Return: adress of new element. if fail return NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new;
	int len = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL || head == NULL || str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new->len = len;
	new->str = strdup(str);

	new->next = new;

	*head = new;

return (*head);

}
