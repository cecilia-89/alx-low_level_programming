#include "lists.h"

/**
 * listint_len - prints elements in a list
 *
 * @h: pointer
 *
 * Return: no. of nodes
 *
 */


size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;

	size_t i = 0;

	if (h == 0)

		return (0);

	while (temp != 0)
	{
		temp = temp->next;

		i++;

	}

	return (i);

}


