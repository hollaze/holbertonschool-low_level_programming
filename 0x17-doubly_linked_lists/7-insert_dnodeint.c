#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at chosen index
 * @h: head node
 * @idx: index of the node starting 0
 * @n: data
 * Return: nth node or NULL if node doesn't exist
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));

	if (h == NULL || new == NULL)
		return (NULL);

	if (idx == 0)
		add_dnodeint(h, n);

	tmp = *h;

	while (tmp != NULL && i < idx - 1)
	{
		if (tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
		i++;
	}

	if (tmp->next == NULL)
		add_dnodeint(h, n);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

return (new);

}
