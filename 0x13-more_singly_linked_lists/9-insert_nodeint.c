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

	listint_t *new, *temp;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));


	if (new == NULL || head == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	new->next = temp->next;
	temp->next = new;

return (new);

}
