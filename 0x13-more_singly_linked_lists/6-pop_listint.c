#include "lists.h"

/**
 * pop_listint - delete head node of a list
 * @head: head node
 * Return: head node's date (n) or,
 * if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;

	*head = (*head)->next; /* goes to the second node */

	free(temp);

return (n);

}
