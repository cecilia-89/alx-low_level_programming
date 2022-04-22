#include "lists.h"

/**
 * list_len - computes size of lists
 *
 * @h: pointer to list_t type
 *
 * Return: count of lists
 *
 */


size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;

		h = h->next;

	}

	return (count);

}
