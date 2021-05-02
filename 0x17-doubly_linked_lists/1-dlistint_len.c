#include "lists.h"

/**
 * dlistint_len - get number of elements in a linked list
 * @h: head node
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

return (count);

}
