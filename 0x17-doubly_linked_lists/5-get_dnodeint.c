#include "lists.h"

/**
 * get_dnodeint_at_index - go to the chosen node of a list
 * @head: head node
 * @index: index of the node starting 0
 * Return: nth node or NULL if node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

return (head);

}
