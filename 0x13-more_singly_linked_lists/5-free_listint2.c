#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head node
 */

void free_listint2(listint_t **head)
{
	*head = NULL;

	if (head == NULL)
		free(*head);

}
