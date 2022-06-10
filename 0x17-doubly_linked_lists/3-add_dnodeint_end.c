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

	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = temp = new;
		new->prev = NULL;
	}


	temp->next = new;
	new->prev = temp;
	temp = new;

	return (*head);
}
