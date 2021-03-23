#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: head node
 * @idx: index
 * @n: integer
 * Return: adress of new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new = *head;
		return (new);
	}


	while (*head != NULL && i < idx)
	{
		*head = (*head)->next;
		i++;
	}

	(*head)->next = new;
	new->n = n;

return (new);

}
