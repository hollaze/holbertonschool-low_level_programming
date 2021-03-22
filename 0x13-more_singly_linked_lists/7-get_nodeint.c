#include "lists.h"

/**
 * get_nodeint_at_index - go to the chosen node of a list
 * @head: head node
 * @index: index of the node starting 0
 * Return: nth node or NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL || !index)
		return (NULL);

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

return (head);

}
