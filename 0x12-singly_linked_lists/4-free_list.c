#include "lists.h"

/**
 * free_list - free a list
 * @head: head of list
 */

void free_list(list_t *head)
{

	list_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
