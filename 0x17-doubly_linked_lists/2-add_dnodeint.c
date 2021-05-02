#include "lists.h"

/**
 * add_dnodeint - add new node at the beginning
 * of a list
 * @head: head node
 * @n: const int
 * Return: adress of new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL || head == NULL || !n)
		return (NULL);

	new->next = *head;
	new->n = n;

	*head = new;

return (*head);

}

