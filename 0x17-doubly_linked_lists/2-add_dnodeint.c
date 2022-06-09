#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning
 * @head: base address
 * @n: interger
 * Return: base address
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == 0)
		return (NULL);

	*head = new;

	new->prev = NULL;

	new->n = n;

	new->next = temp;

	if (temp != NULL)
		temp->prev = new;

	return (*head);
}
