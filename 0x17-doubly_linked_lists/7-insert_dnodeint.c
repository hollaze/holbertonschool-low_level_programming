#include "lists.h"

/**
 * get_dnodeint_at_index - go to the chosen node of a list
 * @h: head node
 * @idx: index of the node starting 0
 * @n: data
 * Return: nth node or NULL if node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;

	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));

	if (*h == NULL || new == NULL)
		return (NULL);

	while (*h != NULL && i < idx)
	{
		*h = (*h)->next;
		i++;
	}

	add_dnodeint(h, n);

return (new);

}
