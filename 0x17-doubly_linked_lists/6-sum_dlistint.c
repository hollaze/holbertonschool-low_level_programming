#include "lists.h"

/**
 * sum_dlistint - sum all n data
 * (n is int in struct lists.h)
 * @head: node head
 * Return: sum of all n data
 */

int sum_dlistint(dlistint_t *head)
{

	int n = 0;

	if (head == NULL)
		return (n);

	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}

return (n);

}
