#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node at index
 *
 * @idx: an unsigned int
 *
 * @n: interger
 *
 * Return: the node
 *
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;

	unsigned int i = 1;

	temp = *head;

	new = malloc(sizeof(listint_t));

	if (*head == 0)

		return (0);

	if (new == 0)

		return (&(*new));

	while (i < idx)
	{
		temp = temp->next;

		i++;
	}

	new->next = temp->next;

	new->n = n;

	temp->next = new;

	return (new);

}


