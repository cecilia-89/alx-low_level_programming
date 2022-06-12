#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index n
 * @h: base node
 * @idx: position to insert node
 * @n: interger
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;

	unsigned int count;

	temp = *h;

	for (count = 1; count < idx; count++)

		temp = temp->next;

	new = malloc(sizeof(dlistint_t));

	new->next = temp->next;

	new->n = n;

	temp->next = new;

	new->prev = temp;

	return (*h);
}
