#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index n
 * @h: base node
 * @idx: position to insert node
 * @n: interger
 * Return: the base head
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;

	unsigned int count;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	temp = *h;

	if (*h == NULL)
		*h = new;

	for (count = 0; temp != NULL; count++)
	{

		if (count == idx)
		{

			new->next = temp;

			new->n = n;

			new->prev = temp->prev;

			temp->prev = new;

			if (new->prev == NULL)
				*h = new;
			else
				new->prev->next = new;

		}

		else
			return (NULL);

		temp = temp->next;
	}

	return (*h);
}
