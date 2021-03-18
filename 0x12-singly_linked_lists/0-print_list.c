#include "lists.h"

/**
 * print_list - print all elements of a list_t list
 * @h: pointer of type list_t
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next; /*point to node*/
		count++;
	}

return (count);

}
