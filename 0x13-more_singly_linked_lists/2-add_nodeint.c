#include "lists.h"

/**
 * add_nodeint - add new node at the beginning
 * of a list
 * @head: head node
 * @n: const int
 * Return: adress of new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL || !n)
		return (NULL);

	new->next = *head;
	new->n = n;

	*head = new;

return (*head);

}
