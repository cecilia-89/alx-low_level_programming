#include "lists.h"

/**
 * print_list - prints lists elements
 *
 * @h: pointer to list_t type
 *
 * Return: count of elements
 */

size_t print_list(const list_t *h)
{

	size_t count = 0;

	while (h != 0)
	{

		if (h->str == 0)

			printf("[%d] (%s)\n", 0, "nil");

		else
			printf("[%d] %s\n", h->len, h->str);

		count++;

		h = h->next;
	
	}


	return (count);

}

