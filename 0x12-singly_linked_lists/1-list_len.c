#include "lists.h"

/**
 * list_len - count number of elements in a linked list
 * @h: head
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
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
