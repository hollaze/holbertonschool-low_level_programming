#include "lists.h"

/**
 * listint_len - get number of elements in a linked list
 * @h: head node
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
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
