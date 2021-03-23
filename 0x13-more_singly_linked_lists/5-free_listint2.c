#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head node
 */

void free_listint2(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (head == NULL)
		return;

	temp1 = *head;
	temp2 = *head;

	while (temp2 != NULL)
	{
		temp1 = temp2;
		temp2 = temp2->next;
		free(temp1);
	}

	*head = NULL;

}
