#include "lists.h"

/**
 * add_node - add new node at the beginning of a list
 * @head: pointer to pointer of head node
 * @str: string to duplicate
 */

list_t *add_node(list_t **head, const char *str)
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

		*head = new;

return (*head);

}
