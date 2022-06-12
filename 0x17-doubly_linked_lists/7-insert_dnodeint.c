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

	for (count = 0; temp != NULL; count++)
	{

		if (count == idx)
		{
			new = malloc(sizeof(dlistint_t));

			new->next = temp;

			new->n = n;

			new->prev = temp->prev;

			temp->prev = new;

			if (new->prev == NULL)
				*h = new;
			else
				new->prev->next = new;
		}

		temp = temp->next;

	}

	return (*h);
}
