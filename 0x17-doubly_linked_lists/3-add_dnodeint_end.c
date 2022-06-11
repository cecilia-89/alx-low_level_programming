#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end
 * @head: base address
 * @n: interger
 * Return: returns the head address
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		temp = *head;

		*head = new;
	}

	new->next = NULL;

	new->prev = temp;

	new->n = n;

	if (temp != NULL)
		temp->next = new;

	temp = new;

	return (*head);
}
