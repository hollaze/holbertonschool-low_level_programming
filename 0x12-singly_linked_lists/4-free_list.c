#include "lists.h"

/**
 * free_list - free a list
 * @head: head of list
 */

void free_list(list_t *head)
{

	if (head == NULL)
		return;

	while (head != NULL)
		head = head->next;

	free(head);

}
