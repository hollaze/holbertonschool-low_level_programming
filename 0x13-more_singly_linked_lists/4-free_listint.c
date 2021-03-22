#include "lists.h"

/**
 * free_linstint_t - frees a list
 * @head: head node
 */

void free_listint(listint_t *head)
{

	if (head != NULL)
		free(head);

}
