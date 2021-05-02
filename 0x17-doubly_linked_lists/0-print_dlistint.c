#include "lists.h"

/**
 * print_dlistint - print all elements of a list
 * @h: head node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{

	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		printf("%i\n", h->n);

		h = h->next;
		count++;
	}

return (count);

}
