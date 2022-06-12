#include "lists.h"

/**
 *
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *tail;

	unsigned int i;

	temp = *head;

	for (i = 0; i < index; i++)
		temp = temp->next;

	tail = temp->next->next;

	free(temp->next);

	temp->next = tail;

	tail->prev = temp;

	return (1);
}
