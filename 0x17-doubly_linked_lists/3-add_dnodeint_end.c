#include "lists.h"

/**
 * add_dnodeint_end - add new node at end of a list
 * @head: head of node
 * @n: data of node
 * Return: adress of the new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new, *temp;

	if (head == NULL)
		return (NULL);


	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;

return (new);

}
